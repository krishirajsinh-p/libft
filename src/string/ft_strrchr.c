/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 03:44:03 by kpuwar            #+#    #+#             */
/*   Updated: 2024/03/18 19:34:23 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char *ft_strrchr(const char *s, int c)
{
	int i = ft_strlen(s);

	// Start from the end of the string and search backwards
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i); // Return a pointer to the found character
		i--;
	}

	// If the character is not found, return NULL
	return NULL;
}
