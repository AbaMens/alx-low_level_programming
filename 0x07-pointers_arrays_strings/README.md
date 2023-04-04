C - Even more pointers, arrays and strings
This brings our focus further on pointers arrays and strings. Giving more insights into 2 dimensional arrays, multidimensional arrays and the relationship between pointers and 2D arrays

Table of contents
Overview
Completed tasks
Links to task files
Links to other files
Mandatory tasks
Task 0
Task 1
Task 2
Task 3
Task 4
Task 5
Task 6
Task 7
Advanced tasks
Task 8
Task 9
My process
Built with
What I learned
Author
Acknowledgments
Credits
Link to template
Overview
Completed tasks
 task 0
 task 1
 task 2
 task 3
 task 4
 task 5
 task 6
 task 7
 task 8
 task 9
Links to task files
Mandatory tasks

Task 0
Task 1
Task 2
Task 3
Task 4
Task 5
Task 6
Task 7
Advanced tasks

Task 8
Task 9
Links to other files
Header file
Mandatory tasks
Task 0
Write a function that fills memory with a constant byte.

Prototype: char *_memset(char *s, char b, unsigned int n);
The _memset() function fills the first n bytes of the memory area pointed to by s with the constant byte b
Returns a pointer to the memory area s
Task file: 0-memset.c

Task 1
Write a function that copies memory area.

Prototype: char *_memcpy(char *dest, char *src, unsigned int n);
The _memcpy() function copies n bytes from memory area src to memory area dest
Returns a pointer to dest
Task file: 1-memcpy.c

Task 2
Write a function that locates a character in a string.

Prototype: char *_strchr(char *s, char c);
Returns a pointer to the first occurrence of the character c in the string s, or NULL if the character is not found
Task file: 2-strchr.c

Task 3
Write a function that gets the length of a prefix substring.

Prototype: unsigned int _strspn(char *s, char *accept);
Returns the number of bytes in the initial segment of s which consist only of bytes from accept
Task file: 3-strspn.c

Task 4
Write a function that searches a string for any of a set of bytes.

Prototype: char *_strpbrk(char *s, char *accept);
The _strpbrk() function locates the first occurrence in the string s of any of the bytes in the string accept
Returns a pointer to the byte in s that matches one of the bytes in accept, or NULL if no such byte is found
Task file: 4-strpbrk.c

Task 5
Write a function that locates a substring.

Prototype: char *_strstr(char *haystack, char *needle);
The _strstr() function finds the first occurrence of the substring needle in the string haystack. The terminating null bytes (\0) are not compared Returns a pointer to the beginning of the located substring, or NULL if the substring is not found.
Task file: 5-strstr.c

Task 6
Write a function that prints the chessboard.

Prototype: void print_chessboard(char (*a)[8]);
Task file: 7-print_chessboard.c

Task 7
Write a function that prints the sum of the two diagonals of a square matrix of integers.

Prototype: void print_diagsums(int *a, int size);
Format: see example
You are allowed to use the standard library
Task file: 8-print_diagsums.c

Advanced tasks
Task 8
Task 9
My process
Built with
C
What I learned
Rigorus use of pointers arrays and strings. Generally I learnt how to manipulate bi dimensional arrays, how to create one and tricky way to tackle problems involving them

Author
ALX - ALX Africa
