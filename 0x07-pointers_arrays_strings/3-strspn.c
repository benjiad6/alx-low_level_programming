#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: initial segment.
 * @accept: accepted bytes.
 * Return: the number of accepted bytes.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int kofi;
	int i;

	while (*s != '\0')
	{
		kofi = 0;
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				kofi = 1;
				break;
			}
		}
		if (kofi)
		{
			length++;
			s++;
		}
		else
		{
			break;
		}
	}

	return (length);
}
