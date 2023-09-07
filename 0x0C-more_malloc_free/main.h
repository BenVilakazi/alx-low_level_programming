#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stdio.h>
int _putchar(char a);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *a, char *b, unsigned int n);
void *_calloc(unsigned int n, unsigned int s);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int a, unsigned int b);
int _strlen(char *);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
void errors(void);
int _strlen(char *a);
int is_digit(char *a);
#endif
