/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 03:44:24 by kpuwar            #+#    #+#             */
/*   Updated: 2024/03/18 19:33:21 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char *ptr1 = (const unsigned char *)s1;
	const unsigned char *ptr2 = (const unsigned char *)s2;

	// Iterate through the strings until reaching the end of one of them or n characters
	for (size_t i = 0; i < n; i++)
	{
		// Check for end of strings
		if (ptr1[i] == '\0' || ptr2[i] == '\0')
			return ptr1[i] - ptr2[i];

		// Compare characters
		if (ptr1[i] != ptr2[i])
			return ptr1[i] - ptr2[i];
	}

	// If all characters match or n characters are compared, return 0
	return 0;
}
