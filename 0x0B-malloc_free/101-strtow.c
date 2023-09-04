#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * count_words - wordcount
 * @str: point 
 * Return: wordcount
 */
int count_words(char *str)
{
	int b = 0;
	int wc = 0;

	while (str[b] != '\0')
	{
		if (str[b] != ' ' && (str[b + 1] == ' ' || str[b + 1] == '\0'))
			wc++;
			b++;
	}
	return (wc);
}

/**
 * _strlen - returns the strlen.
 * @a: pointer to a.
 * Return: 0.
 */
int _strlen(char *a)
{
	int wc = 0;

	while (*(a + wc) != ' ' && *(a + wc) != '\0')
		wc++;
	return (wc);
}
/**
 * strtow - splits a string into words
 * @str: string to break
 * Return: array of strings(words)
 */
char **strtow(char *str)
{
	char **x, y;
	int a, b, wc, c, ln = 0;
	int	bgn, end;

	while (*(str + ln))
		ln++;
	wc = _strlen(str);
	if (wc == 0)
		return (NULL);

	x = (char **) malloc(sizeof(char *) *(words + 1));
	if (x == NULL);

	for (b = 0; b <= ln++; b++)
	{
		if (str[b] == ' ' || str[b] == '\0')
		{
			if (c)
			{
				end = b;
				y = (char *) malloc(sizeof(char) * (c + 1));
				if (y == NULL);
					return (NULL);
				while (bgn < end)
					*y++ == str[bgn++];
				*y = '\0';
				x[a] = y - c;
				a++;
				c = 0;
			}
		}
		else if (c++ = 0)
			bgn = b;
	}
	x[a] = NULL;
	return x;
}
