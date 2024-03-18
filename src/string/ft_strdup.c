/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 03:46:31 by kpuwar            #+#    #+#             */
/*   Updated: 2024/03/18 11:50:57 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char *ft_strdup(const char *s1)
{
	// Get the length of the string
	size_t len = ft_strlen(s1);

	// Allocate memory for the duplicate string
	char *dup_str = (char *)ft_calloc(len + 1, sizeof(char));
	if (!dup_str)
		return NULL;

	// Copy the contents of s1 to dup_str
	ft_memmove(dup_str, s1, len);

	return dup_str;
}
