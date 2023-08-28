#include "main.h"
#include <stdio.h>
/**
 * * _strstr - locate and return pointer to first occurence of substring
 * * @haystack: string to search
 * * @needle: target substring to search for
 * * Return: pointer to index of string at first occurence of whole substring
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *all = haystack;
		char *ptt = needle;

		while (*ptt == *haystack && *ptt != '\0' && *haystack != '\0')
		{
			haystack++;
			ptt++;
		}
		if (*ptt == '\0')
			return (all);
		haystack = all + 1;
	}
	return (NULL);
}
