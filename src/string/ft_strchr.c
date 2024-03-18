/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:30:44 by kpuwar            #+#    #+#             */
/*   Updated: 2024/03/18 11:48:05 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char *ft_strchr(const char *s, int c)
{
	char *ptr = (char *)s;

	// Loop through the string until the null terminator is reached
	while (*ptr != '\0')
	{
		if (*ptr == (char)c)
			return ptr; // Return a pointer to the first occurrence of c
		ptr++;
	}

	// Check if c is the null terminator
	if ((char)c == '\0')
		return ptr; // Return a pointer to the null terminator if c is found

	// Return NULL if c is not found in the string
	return NULL;
}
