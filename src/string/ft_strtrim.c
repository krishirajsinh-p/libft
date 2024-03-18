/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 03:51:48 by kpuwar            #+#    #+#             */
/*   Updated: 2024/03/18 20:41:49 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char *ft_strtrim(const char *s1, const char *set)
{
	if (!s1)
		return NULL;

	if (!set)
		return ft_strdup(s1);

	size_t start = 0;
	size_t end = ft_strlen(s1);

	// Find the start index by skipping characters present in set from the beginning
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;

	// Find the end index by skipping characters present in set from the end
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;

	// Return an empty string if the result is an empty string
	if (start >= end)
		return ft_strdup("");

	// Extract the trimmed substring and return
	return ft_substr(s1, start, end - start);
}
