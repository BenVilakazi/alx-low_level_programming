#include <stdio.h>

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	/*
	* write your line of code here...
	* main - this is a desc
	*/
	*(p + 5) = 98;
}
