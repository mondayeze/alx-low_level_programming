#include "main.h"
/**
 * _abs - compute the absolute value of integer
 * @n: int type number
 * Return: Absolute value of @n
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
