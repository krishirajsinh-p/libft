/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 09:38:52 by kpuwar            #+#    #+#             */
/*   Updated: 2024/03/18 01:49:39 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <stdint.h>

/*
** Character functions
*/

/**
 * @brief Checks if the character is an alphabetic character.
 * 
 * @param c The character to be checked.
 * @return Non-zero value if c is a letter, 0 otherwise.
 */
int ft_isalpha(int c);

/**
 * @brief Checks if the character is a digit.
 * 
 * @param c The character to be checked.
 * @return Non-zero value if c is a digit, 0 otherwise.
 */
int ft_isdigit(int c);

/**
 * @brief Checks if the character is alphanumeric.
 * 
 * @param c The character to be checked.
 * @return Non-zero value if c is a letter or digit, 0 otherwise.
 */
int ft_isalnum(int c);

/**
 * @brief Checks if the character is a standard ASCII character.
 * 
 * @param c The character to be checked.
 * @return Non-zero value if c is a standard ASCII character, 0 otherwise.
 */
int ft_isascii(int c);

/**
 * @brief Checks if the character is a printable character, including space.
 * 
 * @param c The character to be checked.
 * @return Non-zero value if c is printable, 0 otherwise.
 */
int ft_isprint(int c);

/**
 * @brief Converts a lowercase letter to uppercase.
 * 
 * @param c The character to be converted.
 * @return The uppercase equivalent of c if c is a lowercase letter, c otherwise.
 */
int ft_toupper(int c);

/**
 * @brief Converts an uppercase letter to lowercase.
 * 
 * @param c The character to be converted.
 * @return The lowercase equivalent of c if c is an uppercase letter, c otherwise.
 */
int ft_tolower(int c);

/*
** String functions
*/

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
 * @brief Sets the first len bytes of the memory area pointed to by b to the specified value.
 * 
 * @param b The pointer to the memory area.
 * @param c The value to be set (interpreted as an unsigned char).
 * @param len The number of bytes to be set.
 * @return A pointer to the memory area b.
 */
void *ft_memset(void *b, int c, size_t len);

/**
 * @brief Sets the first n bytes of the memory area pointed to by s to zero.
 * 
 * @param s The pointer to the memory area.
 * @param n The number of bytes to be zeroed.
 */
void ft_bzero(void *s, size_t n);

/**
 * @brief Copies n bytes from memory area src to memory area dst.
 * 
 * @param dst The pointer to the destination memory area.
 * @param src The pointer to the source memory area.
 * @param n The number of bytes to be copied.
 * @return A pointer to the destination memory area.
 */
void *ft_memcpy(void *dst, const void *src, size_t n);

/**
 * @brief Copies len bytes from memory area src to memory area dst, handling overlapping memory blocks.
 * 
 * @param dst The pointer to the destination memory area.
 * @param src The pointer to the source memory area.
 * @param len The number of bytes to be copied.
 * @return A pointer to the destination memory area.
 */
void *ft_memmove(void *dst, const void *src, size_t len);

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
 * @brief Locates the first occurrence of a byte in a block of memory.
 * 
 * @param s The pointer to the memory area.
 * @param c The byte to be located.
 * @param n The number of bytes to be analyzed.
 * @return A pointer to the located byte, or NULL if the byte is not found.
 */
void *ft_memchr(const void *s, int c, size_t n);

/**
 * @brief Compares two blocks of memory.
 * 
 * @param s1 The pointer to the first block of memory.
 * @param s2 The pointer to the second block of memory.
 * @param n The number of bytes to be compared.
 * @return An integer greater than, equal to, or less than 0, according to whether s1 is greater than, equal to, or less than s2.
 */
int ft_memcmp(const void *s1, const void *s2, size_t n);

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
 * @brief Converts a string to an integer.
 * 
 * @param str The string to be converted.
 * @return The converted integer value.
 */
int ft_atoi(const char *str);

/**
 * @brief Allocates memory for an array of count elements of size bytes each and initializes all bits to zero.
 * 
 * @param count The number of elements to allocate.
 * @param size The size of each element.
 * @return A pointer to the allocated memory block, or NULL if the allocation fails.
 */
void *ft_calloc(size_t count, size_t size);

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
 * @brief Converts an integer to a string.
 * 
 * @param n The integer to be converted.
 * @return The string representation of the integer, or NULL if the allocation fails.
 */
char *ft_itoa(int n);

/**
 * @brief Applies the function f to each character of the string passed as argument by giving its index as first argument.
 * 
 * @param s The string to be iterated.
 * @param f The function to apply to each character.
 */
void ft_striteri(char *s, void (*f)(unsigned int, char *));

/*
** Output functions
*/

/**
 * @brief Outputs a character to the specified file descriptor.
 * 
 * @param c The character to output.
 * @param fd The file descriptor.
 */
void ft_putchar_fd(char c, int fd);

/**
 * @brief Outputs a string to the specified file descriptor.
 * 
 * @param s The string to output.
 * @param fd The file descriptor.
 */
void ft_putstr_fd(char *s, int fd);

/**
 * @brief Outputs a string followed by a newline character to the specified file descriptor.
 * 
 * @param s The string to output.
 * @param fd The file descriptor.
 */
void ft_putendl_fd(char *s, int fd);

/**
 * @brief Outputs an integer to the specified file descriptor.
 * 
 * @param n The integer to output.
 * @param fd The file descriptor.
 */
void ft_putnbr_fd(int n, int fd);

/*
** Linked list functions
*/

/**
 * @brief Represents a node in a linked list.
 */
typedef struct s_list
{
    void *content; ///< The content of the node.
    struct s_list *next; ///< Pointer to the next node.
} t_list;

/**
 * @brief Allocates and returns a new node.
 * 
 * @param content The content to be added to the new node.
 * @return A pointer to the new node, or NULL if the allocation fails.
 */
t_list *ft_lstnew(void *content);

/**
 * @brief Adds a new node at the beginning of the list.
 * 
 * @param lst The address of a pointer to the first node of a list.
 * @param new The address of the node to add.
 */
void ft_lstadd_front(t_list **lst, t_list *new);

/**
 * @brief Counts the number of elements in a list.
 * 
 * @param lst The first node of the list.
 * @return The number of elements in the list.
 */
int ft_lstsize(t_list *lst);

/**
 * @brief Returns the last node of a list.
 * 
 * @param lst The first node of the list.
 * @return A pointer to the last node of the list.
 */
t_list *ft_lstlast(t_list *lst);

/**
 * @brief Adds a new node at the end of the list.
 * 
 * @param lst The address of a pointer to the first node of a list.
 * @param new The address of the node to add.
 */
void ft_lstadd_back(t_list **lst, t_list *new);

/**
 * @brief Deletes a node and frees its memory using the specified function.
 * 
 * @param lst The node to delete.
 * @param del The function used to delete the content of the node.
 */
void ft_lstdelone(t_list *lst, void (*del)(void *));

/**
 * @brief Deletes all nodes in a list and frees their memory using the specified function.
 * 
 * @param lst The address of a pointer to the first node of a list.
 * @param del The function used to delete the content of each node.
 */
void ft_lstclear(t_list **lst, void (*del)(void *));

/**
 * @brief Iterates over all nodes in a list and applies the specified function to each node's content.
 * 
 * @param lst The first node of the list.
 * @param f The function to apply to each node's content.
 */
void ft_lstiter(t_list *lst, void (*f)(void *));

/**
 * @brief Iterates over all nodes in a list, applies the specified function to each node's content, and creates a new list from the results.
 * 
 * @param lst The first node of the list.
 * @param f The function to apply to each node's content.
 * @param del The function used to delete the content of each node if an error occurs.
 * @return A pointer to the first node of the new list, or NULL if the allocation fails.
 */
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
