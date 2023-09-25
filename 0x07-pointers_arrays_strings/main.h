#ifndef MAIN_H
#define MAIN_H

char *_memset(char *s, char b, unsigned int n);

/* 1. memcpy */
char *_memcpy(char *dest, char *src, unsigned int n);

/* 2. strchr */
char *_strchr(char *s, char c);

/* 3. strspn */
unsigned int _strspn(char *s, char *accept);

/* 4. strpbrk */
char *_strpbrk(char *s, char *accept);

/* 5. strstr */
char *_strstr(char *haystack, char *needle);

/* 6. Chess is mental torture (please provide chessboard content) */

/* 7. The line of life is a ragged diagonal between duty and desire */
void print_diagsums(int *a, int size);

#endif
