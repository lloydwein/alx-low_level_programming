#include "main.h"

/**
 * wordcount - counts number of words
 * @str: string
 *
 * Return: int
 */
int wordcount(char *str)
{
	int l, wc;

	l = 0, wc = 0;
	if (*(str + l) == ' ')
		l++;
	while (*(str + l))
	{
		if (*(str + l) == ' ' && *(str + l - 1) != ' ')
			wc++;
		if (*(str + l) != ' '  && *(str + l + 1) == 0)
			wc++;
		l++;
	}
	return (wc);
}

/**
 * _trspace - Moves adress to remove trailig whitespaces
 * @str: string
 *
 * Return: Pointer
 */
char *_trspace(char *str)
{
	while (*str == ' ')
		str++;
	return (str);
}

/**
 * strtow - splits a string into words
 * @str: string
 *
 * Return: Double Pointer
 */
char **strtow(char *str)
{
	char **s, *ts;
	int l, l2, wc, i, j, fr, k;

	if (str == NULL || *str == 0)
		return (0);
	fr = 0;
	wc = wordcount(str);
	if (wc == 0)
		return (0);
	s = malloc((wc + 1) * sizeof(char *));
	if (s == 0)
		return (0);
	ts = _trspace(str);
	for (i = 0; i < wc; i++)
	{
		l = 0;
		while (*(ts + l) != ' ' && *(ts + l) != 0)
			l++;
		s[i] = malloc((l + 1) * sizeof(char));
		if (s[i] == 0)
		{
			fr = 1;
			break;
		}
		for (j = 0, l2 = 0; l2 < l; l2++, j++)
			s[i][j] = *(ts + l2);
		s[i][j] = '\0';
		ts = _trspace(ts + l);
	}
	s[i] = NULL;
	if (fr == 1)
	{
		for (k = 0; k <= i; k++)
			free(s[k]);
		free(s);
	}
	return (s);
}
