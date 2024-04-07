/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 00:28:43 by kpuwar            #+#    #+#             */
/*   Updated: 2024/04/08 00:47:45 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEMORY_H
#define MEMORY_H

#include <unistd.h>

/**
 * @brief Allocates memory for an array of count elements of size bytes each and initializes all bits to zero.
 * 
 * @param count The number of elements to allocate.
 * @param size The size of each element.
 * @return A pointer to the allocated memory block, or NULL if the allocation fails.
 */
void *ft_calloc(size_t count, size_t size);

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

#endif
