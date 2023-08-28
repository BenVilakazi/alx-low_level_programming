#include "main.h"
/**
 * _if_not_number - returns 1st int in a str acc for + & -
 * @s: checks str
 * Return: int
 */
int _if_not_number(char *s)
{
	int num = 0;
	int min = 0;
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == '-')
			min++;
		if (*(s + i) >= '0' && *(s + i) <= '9')
		{
			if (num > 0)
				num = num * 10 + (*(s + i) - '0');
			else
				num = *(s + i) - '0';
		}
		if (num != 0 && (*(s + i) < '0' || *(s + i) > '9'))
			break;
		i++;
	}
	if (num == 0)
		return (0);
	if (min % 2 == 0)
		return (num);
	else
		return (num * (-1));
}

/**
 * _atoi - prints a str, then newline
 * @s: pointer-to-str
 * Return: null
 */

int _atoi(char *s)
{
	int i, num, next;
	char _1st, _2nd;

	num = 0;
	_1st = *(s + 0);
	_2nd = *(s + 1);
	if (*s != '\0')
	{
		if (_1st == '-' && (_2nd >= '0' && _2nd <= '9'))
		{
			num = (num + (_2nd - '0')) * (-1);
			i = 2;
			while (*(s + i) != '\0')
			{
				next = *(s + i) - '0';
				num = num * 10 - next;
				i++;
			}
		}
		if (_1st >= '0' && _1st <= '9')
		{
			num = num + (_1st - '0');
			i = 1;
			while (*(s + i) != '\0')
			{
				next = *(s + i) - '0';
				num = num * 10 + next;
				i++;
			}
		}
		if ((_1st < '0' || _1st > '9') && (_2nd < '0' || _2nd > '9'))
			num = _if_not_number(s);
	}
	return (num);
}
