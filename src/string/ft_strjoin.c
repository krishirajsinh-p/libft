/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 03:51:19 by kpuwar            #+#    #+#             */
/*   Updated: 2024/03/18 11:59:49 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char *ft_strjoin(const char *s1, const char *s2)
{
	if (!s1 || !s2)
		return NULL;

	size_t len_s1 = ft_strlen(s1);
	size_t len_s2 = ft_strlen(s2);
	char *ptr = (char *)ft_calloc(len_s1 + len_s2 + 1, sizeof(char)); // Allocate memory for the concatenated string
	if (!ptr)
		return NULL;

	ft_memcpy(ptr, s1, len_s1);			 // Copy s1 to ptr
	ft_memcpy(ptr + len_s1, s2, len_s2); // Copy s2 to ptr, starting from the end of s1

	return ptr;
}
