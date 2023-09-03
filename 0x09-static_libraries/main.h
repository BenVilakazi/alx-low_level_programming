#ifndef MAIN_H
#define MAIN_H
int _putchar(char a);
int _islower(int a);
int _isalpha(int a);
int _isupper(int a);
int _isdigit(int a);
int _abs(int a);
int _strlen(char *a);
int _strcmp(char *a, char *b);
int _atoi(char *a);
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
char *_strchr(char *a, char b);
char *_strpbrk(char *a, char *input);
char *_strstr(char *haystack, char *needle);
char *_memset(char *a, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
unsigned int _strspn(char *a, char *input);
void _puts(char *a);
#endif /*MAIN_H*/
