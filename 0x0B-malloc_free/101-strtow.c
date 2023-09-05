#include "main.h"
#include <stdlib.h>

/**
 * is_space - check if space
 * @c: char
 * Return: 1/0
 */
int is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n'
|| c == '\r' || c == '\f' || c == '\v');
}

/**
 * count_words - count words
 * @str: string
 * Return: len
 */
int count_words(char *str)
{
	int word_count = 0;
	int in_word = 0;

	while (*str)
	{
		if (is_space(*str))
		{
			in_word = 0;
		}
		else if (!in_word)
		{
			in_word = 1;
			word_count++;
		}
		str++;
	}

	return (word_count);
}

/**
 * strtow - string to array
 * @str: string
 * Return: NULL/Pointer
 */
char **strtow(char *str)
{
	int word_index = 0, in_word = 0, total_words = count_words(str), i;
	char *word_start = NULL;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);
	if (total_words == 0)
		return (NULL);

	words = (char **)malloc((total_words + 1) * sizeof(char *));

	if (words == NULL)
		return (NULL);
	while (*str)
	{
		if (is_space(*str))
			in_word = 0;
		else if (!in_word)
			in_word = 1, word_start = str;
		if (in_word && (is_space(*(str + 1)) || *(str + 1) == '\0'))
		{
			int word_length = str - word_start + 2;

			words[word_index] = (char *)malloc(word_length);
			if (words[word_index] == NULL)
			{
				for (i = 0; i < word_index; i++)
					free(words[i]);
				free(words);
				return (NULL);
			}
			for (i = 0; i < word_length; i++)
				words[word_index][i] = word_start[i];
			words[word_index][word_length - 1] = '\0', word_index++;
		}
		str++;
	}
	words[word_index] = NULL;
	return (words);
}
