/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 23:48:06 by kpuwar            #+#    #+#             */
/*   Updated: 2024/03/18 20:56:56 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	if (*needle == '\0')
		return (char *)haystack;

	size_t needle_len = ft_strlen(needle);

	while (*haystack != '\0' && len >= needle_len)
	{
		if (*haystack == *needle && ft_strncmp(haystack, needle, needle_len) == 0)
			return (char *)haystack;

		haystack++;
		len--;
	}

	return NULL;
}
