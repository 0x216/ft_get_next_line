/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ant <ant@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 02:37:32 by ant               #+#    #+#             */
/*   Updated: 2024/01/15 22:09:50 by ant              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "get_next_line_utils.h"

void	shift_buffer(char **buffer, int start_index)
{
	int	j;

	j = 0;
	while ((*buffer)[start_index] != '\0')
		(*buffer)[j++] = (*buffer)[start_index++];
	(*buffer)[j] = '\0';
}

char	*find_line(char **buffer)
{
	char	*line;
	int		i;

	if (!buffer || !*buffer)
		return (NULL);
	line = malloc(sizeof(char) * (ft_strlen(*buffer) + 1));
	if (!line)
		return (NULL);
	i = 0;
	while ((*buffer)[i] != '\0')
	{
		line[i] = (*buffer)[i];
		if ((*buffer)[i] == '\n')
		{
			line[i + 1] = '\0';
			shift_buffer(buffer, i + 1);
			return (line);
		}
		i++;
	}
	return (ft_free(((void **)&line), NULL));
}

void	extend_buffer(char **dynamic_buffer, char *new_data, size_t bytes_read)
{
	size_t	current_length;
	size_t	new_size;
	char	*temp_buffer;

	if (*dynamic_buffer)
		current_length = ft_strlen(*dynamic_buffer);
	else
		current_length = 0;
	new_size = current_length + bytes_read;
	if (new_size < current_length || new_size < bytes_read)
	{
		ft_free((void **)dynamic_buffer, NULL);
		return ;
	}
	temp_buffer = ft_realloc(*dynamic_buffer, new_size + 1, current_length);
	if (!temp_buffer)
	{
		ft_free((void **)dynamic_buffer, NULL);
		*dynamic_buffer = NULL;
		return ;
	}
	*dynamic_buffer = temp_buffer;
	ft_memcpy(*dynamic_buffer + current_length, new_data, bytes_read);
	(*dynamic_buffer)[new_size] = '\0';
}

char	*process_remaining_buffer(char **dynamic_buffer, char **buffer)
{
	char	*line;

	ft_free((void **)buffer, NULL);
	if (*dynamic_buffer && **dynamic_buffer)
	{
		line = find_line(dynamic_buffer);
		if (line)
			return (line);
		line = ft_strndup(*dynamic_buffer, ft_strlen(*dynamic_buffer));
	}
	else
		line = NULL;
	ft_free((void **)dynamic_buffer, NULL);
	return (line);
}

char	*get_next_line(int fd)
{
	static char	*dynamic_buffer;
	char		*buffer;
	char		*line;
	int			bytes_read;

	buffer = malloc(BUFFER_SIZE + 1);
	while (1)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read < 0)
			return (ft_free((void **)&dynamic_buffer, (void **)&buffer));
		if (bytes_read == 0)
			return (process_remaining_buffer(&dynamic_buffer, &buffer));
		buffer[bytes_read] = '\0';
		extend_buffer(&dynamic_buffer, buffer, bytes_read);
		line = find_line(&dynamic_buffer);
		if (line)
		{
			ft_free((void **)&buffer, NULL);
			return (line);
		}
	}
}
