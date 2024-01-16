/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ant <ant@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 20:51:24 by ant               #+#    #+#             */
/*   Updated: 2024/01/15 21:59:49 by ant              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_UTILS_H
# define GET_NEXT_LINE_UTILS_H
# include "get_next_line.h"

size_t	ft_strlen(const char *s);
void	ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_free(void **ptr, void **ptr2);
char	*ft_strndup(const char *s, size_t n);
void	*ft_realloc(void *ptr, size_t size, size_t old_size);
#endif