#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s_s1 = 0, s_s2 = 0, t_s = 0;
	unsigned int i;
	char *out;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[s_s1] != 0)
		s_s1++;

	while (s2[s_s2] != 0)
		s_s2++;

	if (n < s_s2)
		s_s2 = n;

	t_s = (s_s1 + s_s2) + 1;
	out = malloc(sizeof(char) * t_s);

	if (out == NULL)
		return (NULL);

	for (i = 0; i <= s_s1; i++)
		out[i] = s1[i];

	for (i = 0; i < s_s2; i++)
		out[s_s1 + i] = s2[i];

	out[s_s1 + s_s2] = 0;

	return (out);
}
