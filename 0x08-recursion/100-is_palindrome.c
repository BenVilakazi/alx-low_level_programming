#include "main.h"
/**
 * palindromeChecker - Check string if is palindrome.
 * @str: type char str
 * @len: type int srtlen var
 * @i: type int increments
 * Return: 1 if palindrome 0 if not.
 */
int palindromeChecker(char *str, int len, int i)
{
		if (i < len && str[i] == str[len])
			return (palindromeChecker(str, len - 1, i + 1));
		if (str[i] != str[len])
			return (0);
		return (1);
}
/**
 * _strlen_recursion - Returns the length of a string.
 * @s: type char str
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
		if (*s != '\0')
			return (1 + _strlen_recursion(s + 1));

		return (0);
}
/**
 * is_palindrome - Recurssive funct that checks a palindrome
 * @s: type char str
 * Return: 1 if palindrome 0 if not.
 */
int is_palindrome(char *s)
{
		int i = 0;
			int length = _strlen_recursion(s) - 1;

				return (palindromeChecker(s, length, i));
}
