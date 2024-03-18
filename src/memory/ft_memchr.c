/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 03:44:37 by kpuwar            #+#    #+#             */
/*   Updated: 2024/03/18 11:13:01 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char *ptr = (const unsigned char *)s;

	// Iterate over the memory region
	for (size_t i = 0; i < n; i++)
	{
		// Check if the current byte matches the target character
		if (ptr[i] == (unsigned char)c)
			return (void *)&ptr[i];
	}

	// If character is not found within the specified number of bytes, return NULL
	return NULL;
}
