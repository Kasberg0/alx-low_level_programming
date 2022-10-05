#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatenates 2 strings
 * NULL string is treated as an empty string
 * @sl: pointer to string.
 * @s2: pointer to string
 *
 * Return: pointer to newly allocated memory which
 * has sl, s2 and null byte
 * NULL on failure.
 */
char *str_concat(char *sl, char *s2)
{
	unsigned int lenl, len2, size, i, j;
	char *nstr;

	if (sl == NULL)
		s1 = "";
	if (s2 == NULL)
		S2 = "";

	len1= 0;
	while (s1[len1] != '\0')
		len1++;
	len2 = 0;
	while (s2[len2] != '\0')
		len2++;

	size = len1 + len2;

	nstr = malloc((sizeof(char) * size) + 1);
	/* check if malloc was successful */
	if (nstr == NULL)
		return (NULL);

	i = 0;
	while (i < len1)
	{
		nstr[i] = s1[i];
		i++;
	}
	j = 0;
	while (i <= size)
	{
		nstr[i] = s2[j];
		i++;
		j++;
	}
	return (nstr);
}
