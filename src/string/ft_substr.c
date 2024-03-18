/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 03:51:01 by kpuwar            #+#    #+#             */
/*   Updated: 2024/03/18 19:54:59 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char *ft_substr(const char *s, unsigned int start, size_t len)
{
	if (!s)
		return NULL; // Handle the case where s is NULL

	size_t s_len = ft_strlen(s);

	// Adjust start and len if start exceeds string length
	if (start >= s_len)
	{
		start = s_len;
		len = 0;
	}
	else if (len > s_len - start)
	{
		len = s_len - start;
	}

	// Allocate memory for the substring
	char *ptr = (char *)ft_calloc(len + 1, sizeof(char));
	if (!ptr)
		return NULL;

	// Copy the substring from s to ptr
	ft_memcpy(ptr, s + start, len);

	return ptr;
}
