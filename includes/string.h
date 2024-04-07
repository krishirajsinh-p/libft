/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 00:28:49 by kpuwar            #+#    #+#             */
/*   Updated: 2024/04/08 00:47:06 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRING_H
#define STRING_H

#include <unistd.h>

/**
 * @brief Calculates the length of the given string.
 * 
 * @param s The string to be measured.
 * @return The length of the string.
 */
size_t ft_strlen(const char *s);

/**
 * @brief Locates the first occurrence of a character in a string.
 * 
 * @param s The string to be searched.
 * @param c The character to be located.
 * @return A pointer to the located character, or NULL if the character does not appear in the string.
 */
char *ft_strchr(const char *s, int c);

/**
 * @brief Locates the last occurrence of a character in a string.
 * 
 * @param s The string to be searched.
 * @param c The character to be located.
 * @return A pointer to the located character, or NULL if the character does not appear in the string.
 */
char *ft_strrchr(const char *s, int c);

/**
 * @brief Compares two strings up to the given number of characters.
 * 
 * @param s1 The first string.
 * @param s2 The second string.
 * @param n The maximum number of characters to compare.
 * @return An integer greater than, equal to, or less than 0, according to whether s1 is greater than, equal to, or less than s2.
 */
int ft_strncmp(const char *s1, const char *s2, size_t n);

/**
 * @brief Copies up to dstsize - 1 characters from the string src to dst, null-terminating the result.
 * 
 * @param dst The destination buffer.
 * @param src The source string.
 * @param dstsize The size of the destination buffer.
 * @return The total length of the string they tried to create, excluding the terminating null byte.
 */
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);

/**
 * @brief Appends the NUL-terminated string src to the end of dst.
 * 
 * @param dst The destination buffer.
 * @param src The source string.
 * @param dstsize The size of the destination buffer.
 * @return The total length of the string they tried to create, excluding the terminating null byte.
 */
size_t ft_strlcat(char *dst, const char *src, size_t dstsize);

/**
 * @brief Locates the first occurrence of the substring needle in the string haystack, where not more than len characters are searched.
 * 
 * @param haystack The string to be searched.
 * @param needle The substring to search for.
 * @param len The maximum number of characters to search.
 * @return A pointer to the located substring, or NULL if the substring is not found.
 */
char *ft_strnstr(const char *haystack, const char *needle, size_t len);

/**
 * @brief Duplicates a string.
 * 
 * @param s1 The string to be duplicated.
 * @return A pointer to the newly allocated memory block containing the duplicated string.
 */
char *ft_strdup(const char *s1);

/**
 * @brief Allocates and returns a substring from the string s.
 * 
 * @param s The string from which to create the substring.
 * @param start The start index of the substring in s.
 * @param len The length of the substring.
 * @return The substring, or NULL if the allocation fails.
 */
char *ft_substr(char const *s, unsigned int start, size_t len);

/**
 * @brief Concatenates two strings.
 * 
 * @param s1 The first string.
 * @param s2 The second string.
 * @return The concatenated string, or NULL if the allocation fails.
 */
char *ft_strjoin(char const *s1, char const *s2);

/**
 * @brief Removes leading and trailing whitespace characters from a string.
 * 
 * @param s1 The string to be trimmed.
 * @param set A string containing the characters to be trimmed.
 * @return The trimmed string, or NULL if the allocation fails.
 */
char *ft_strtrim(char const *s1, char const *set);

/**
 * @brief Splits a string into an array of substrings using the specified delimiter character.
 * 
 * @param s The string to be split.
 * @param c The delimiter character.
 * @return An array of substrings, or NULL if the allocation fails.
 */
char **ft_split(char const *s, char c);


/**
 * @brief Applies the function f to each character of the string passed as argument by giving its index as first argument.
 * 
 * @param s The string to be iterated.
 * @param f The function to apply to each character.
 */
void ft_striteri(char *s, void (*f)(unsigned int, char *));

#endif
