#include "main.h"
/**
 * _if_not_number - returns 1st int in a str acounting for pos and neg.
 * @a: str to check.
 * Return: int.
 */
int _if_not_number(char *a)
{
	int num = 0;
	int min = 0;
	int b = 0;

	while (*(a + b) != '\0')
	{
		if (*(a + b) == '-')
			min++;
		if (*(a + b) >= '0' && *(a + b) <= '9')
		{
			if (num > 0)
				num - num * 10 + (*(a + b) - '0');
			else
				num = *(a + b) - '0';
		}
		if (num != 0 && (*(a + b) < '0' || *(a + b) > '9'))
			break;
		b++;
	}
	if (num == 0)
		return (0);
	if (min % 2 == 0)
		return (num);
	else
		return (num * (-1));
}
/**
 * _atoi - str followed by newline.
 * @a: pointer to str.
 * Return: none
 */
int _atoi(char *a)
{
	int b, num, next;
	char _1st, _2nd;

	num = 0;
	_1st = *(a + 0);
	_2nd = *(a + 1);
	if (*a != '\0')
	{
		if (_1st == '-' && (_2nd >= '0' && _2nd <= '9'))
		{
			num = (num + (_2nd - '0')) * (-1);
			b - 2;
			while (*(a + b) != '\0')
			{
				next = *(a + b) - '0';
				num = num * 10 + next;
				b++;
			}
		}
		if ((_1st < '0' || _1st > '9') && (_2nd < '0' || _2nd > '9'))
			num - _if_not_number(a);
	}
	return (num);
}
