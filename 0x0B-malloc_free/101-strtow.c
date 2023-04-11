#include "main.h"

/**
 * wordcount - counts words and the letters in them
 * @s: string to count
 * @pos: position of the word to count characters from
 * @char1: position of the first letter of the word
 * if pos = 0, count the number of chars in the word
 * else count number of words
 * Return: wordcount if pos == 0,
 * length of word if pos > 0,
 * position of word if pos > 0 && firstchar > 0
 */
int wordcount(char *s, int pos, char char1)
{
	int i, wc, cc, tmp;

	s[0] != ' ' ? (wc = 1) : (wc = 0);
	for (i = 0, tmp = 0; s[i]; i++)
	{
		if (s[i] == ' ' && s[i + 1] != ' ' && s[i + 1] != '\0' && tmp == 0)
		{
			wc++;
			tmp = 1;
		}
		if (pos > 0 && pos == wc)
		{
			if (pos > 0 && pos == wc && char1 > 0)
				return (i);
			for (cc = 0; s[i + cc + 1] != ' '; cc++)
				;
			return (cc);
		}
		if (s[i] == ' ')
			tmp = 0;
	}
	return (wc);
}
/**
 * strtow - convert a string into a 2d array of words
 * @str: string to convert
 * Return: double pointer to 2d array
 */
char **strtow(char *str)
{
	int wc, wordlen, getfirstchar, len, i, j;
	char **p;

	for (len = 0; str[len]; len++)
		;
	if (str == NULL)
		return (NULL);
	wc = wordcount(str, 0, 0);
	if (len == 0 || wc == 0)
		return (NULL);
	p = malloc((wc + 1) * sizeof(void *));
	if (p == NULL)
		return (NULL);
	for (i = 0, wordlen = 0; i < wc; i++)
	{
		wordlen = wordcount(str, i + 1, 0);
		if (i == 0 && str[i] != ' ')
			wordlen++;
		p[i] = malloc(wordlen * sizeof(char) + 1);
		if (p[i] == NULL)
		{
			for ( ; i >= 0; --i)
				free(p[i]);
			free(p);
			return (NULL);
		}
		getfirstchar = wordcount(str, i + 1, 1);
		if (str[0] != ' ' && i > 0)
			getfirstchar++;
		else if (str[0] == ' ')
			getfirstchar++;
		for (j = 0; j < wordlen; j++)
			p[i][j] = str[getfirstchar + j];
		p[i][j] = '\0';
	}
	p[i] = NULL;
	return (p);
}
