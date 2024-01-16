```
Running tests: fsoares (my own tests)
BUFFER_SIZE: 1
Invalid fd          : 1.OK 2.OK 3.OK 4_LEAKS.OK 
empty.txt           : 1.OK 2.OK 3_LEAKS.OK 
1char.txt           : 1.OK 2.OK 3_LEAKS.OK 
one_line_no_nl.txt  : 1.OK 2.OK 3_LEAKS.OK 
only_nl.txt         : 1.OK 2.OK 3_LEAKS.OK 
multiple_nl.txt     : 1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7_LEAKS.OK 
variable_nls.txt    : 1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7.OK 8.OK 9.OK 10.OK 11.OK 12.OK 13.OK 14_LEAKS.OK 
lines_around_10.txt : 1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7_LEAKS.OK 
read_error.txt      : 1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7.OK 8.OK 9_LEAKS.OK 
stdin               : 1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7_LEAKS.OK 

BUFFER_SIZE: 10
Invalid fd          : 1.OK 2.OK 3.OK 4_LEAKS.OK 
empty.txt           : 1.OK 2.OK 3_LEAKS.OK 
1char.txt           : 1.OK 2.OK 3_LEAKS.OK 
one_line_no_nl.txt  : 1.OK 2.OK 3_LEAKS.OK 
only_nl.txt         : 1.OK 2.OK 3_LEAKS.OK 
multiple_nl.txt     : 1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7_LEAKS.OK 
variable_nls.txt    : 1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7.OK 8.OK 9.OK 10.OK 11.OK 12.OK 13.OK 14_LEAKS.OK 
lines_around_10.txt : 1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7_LEAKS.OK 
giant_line.txt      : 1.OK 2.OK 3_LEAKS.OK 
giant_line_nl.txt   : 1.OK 2.OK 3.OK 4_LEAKS.OK 
read_error.txt      : 1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7.OK 8.OK 9_LEAKS.OK 
limits              : 1.OK 2.OK 3_LEAKS.OK 4.OK 5.OK 6_LEAKS.OK 7.OK 8.OK 9_LEAKS.OK 10.OK 11.OK 12_LEAKS.OK 13.OK 14.OK 15_LEAKS.OK 16.OK 17.OK 18_LEAKS.OK 19.OK 20.OK 21_LEAKS.OK 22.OK 23.OK 24_LEAKS.OK 25.OK 26.OK 27_LEAKS.OK 28.OK 29.OK 30_LEAKS.OK 31.OK 32.OK 33_LEAKS.OK 34.OK 35.OK 36_LEAKS.OK 37.OK 38.OK 39.OK 40_LEAKS.OK 41.OK 42.OK 43.OK 44_LEAKS.OK 45.OK 46.OK 47.OK 48_LEAKS.OK 49.OK 50.OK 51.OK 52_LEAKS.OK 53.OK 54.OK 55.OK 56_LEAKS.OK 57.OK 58.OK 59.OK 60_LEAKS.OK 
stdin               : 1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7_LEAKS.OK 

BUFFER_SIZE: 1000000
Invalid fd          : 1.OK 2.OK 3.OK 4_LEAKS.OK 
empty.txt           : 1.OK 2.OK 3_LEAKS.OK 
1char.txt           : 1.OK 2.OK 3_LEAKS.OK 
one_line_no_nl.txt  : 1.OK 2.OK 3_LEAKS.OK 
only_nl.txt         : 1.OK 2.OK 3_LEAKS.OK 
multiple_nl.txt     : 1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7_LEAKS.OK 
variable_nls.txt    : 1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7.OK 8.OK 9.OK 10.OK 11.OK 12.OK 13.OK 14_LEAKS.OK 
lines_around_10.txt : 1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7_LEAKS.OK 
giant_line.txt      : 1.OK 2.OK 3_LEAKS.OK 
giant_line_nl.txt   : 1.OK 2.OK 3.OK 4_LEAKS.OK 
read_error.txt      : 1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7.OK 8.OK 9_LEAKS.OK 
stdin               : 1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7_LEAKS.OK 

Want some more thorough tests? run 'francinette --strict'.

╔══════════════════════════════════════════════════════════════════════════════╗
║                 🎉🥳 All tests passed! Congratulations! 🥳🎉                 ║
╚══════════════════════════════════════════════════════════════════════════════╝
```
