#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - check the code for Holberton School students.
 *@s1:first array
 *@s2: Secont array
 *@n:number of bytes for print
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	unsigned int cont1, cont2, i, e;
	char *concad;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	cont1 = 0;
	while (s1[cont1] != '\0')
	{
		cont1++;
	}
	while (s2[cont2] != '\0')
	{
		cont2++;
	}
	if (n <= cont2)
	{
		cont2 = n;
	}
		concad = malloc((cont1 + cont2) * sizeof(char));
		if (concad == NULL)
		{
			return (NULL);
		}
	for (i = 0; s1[i]; i++)
	{
		concad[i] = s1[i];
	}
	for (e = 0; e <= (cont2 - 1) ; e++)
	{
		concad[i + e] = s2[e];
	}
	return (concad);
}
