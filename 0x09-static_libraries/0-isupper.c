#include "holberton.h"
/**
 * _isupper - check the code for Holberton School students.
 *@c: is c do something
 * Return: Always 0.
 */
int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
