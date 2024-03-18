/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 22:04:40 by kpuwar            #+#    #+#             */
/*   Updated: 2024/03/18 22:03:19 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

// Function to count the number of words in a string separated by character c
static int count_words(const char *s, char c)
{
	int count = 0;
	int in_word = 0;

	while (*s)
	{
		if (*s == c)
		{
			in_word = 0;
		}
		else if (in_word == 0)
		{
			in_word = 1;
			count++;
		}
		s++;
	}
	return count;
}

// Function to copy a word from a string until a separator character is encountered
static char *copy_word(const char *s, char c)
{
	int len = 0;
	while (s[len] && s[len] != c)
		len++;
	char *word = (char *)malloc((len + 1) * sizeof(char));
	if (!word)
		return NULL;
	for (int i = 0; i < len; i++)
		word[i] = s[i];
	word[len] = '\0';
	return word;
}

char **ft_split(char const *s, char c)
{
	if (!s)
		return NULL;

	// Count the number of words in the string
	int num_words = count_words(s, c);

	// Allocate memory for an array of strings (words) plus one additional space for NULL terminator
	char **result = (char **)malloc((num_words + 1) * sizeof(char *));
	if (!result)
		return NULL;

	int i = 0;
	while (*s)
	{
		if (*s != c)
		{
			// Copy the word starting from the current position
			result[i] = copy_word(s, c);
			if (!result[i])
			{
				// Free memory allocated for previously copied words
				while (i > 0)
					free(result[--i]);
				free(result); // Free memory allocated for the result array
				return NULL;
			}
			i++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	result[i] = NULL;
	return result;
}
