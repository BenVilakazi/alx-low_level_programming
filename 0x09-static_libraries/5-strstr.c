#include "main.h"
/**
 * _strstr - dest a sunstr.
 * @haystack: str searched.
 * @needle: substr found.
 * Return: pointer to substr else NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	char *res = haystack, *fneedle = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (res);
		}
		needle = fneedle;
		res++;
		haystack = res;
	}
	return (0);
}
