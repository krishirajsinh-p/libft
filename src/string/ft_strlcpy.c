/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 03:42:49 by kpuwar            #+#    #+#             */
/*   Updated: 2024/03/18 19:22:15 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i = 0;

	// Ensure dst is not NULL and there is space in dst to copy characters
	if (dst && dstsize > 0)
	{
		// Copy characters from src to dst until reaching the end of src or dstsize
		while (src[i] && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		// Null-terminate the destination string
		dst[i] = '\0';
	}

	// Return the length of the source string
	return ft_strlen(src);
}
