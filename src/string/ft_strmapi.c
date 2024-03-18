/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 02:08:42 by kpuwar            #+#    #+#             */
/*   Updated: 2024/03/18 19:29:43 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	if (!s || !f)
		return NULL;

	size_t len = ft_strlen(s);
	char *ptr = ft_calloc(len + 1, sizeof(char)); // Allocate memory for the new string
	if (!ptr)
		return NULL;

	for (size_t i = 0; i < len; i++)
		ptr[i] = f(i, s[i]); // Apply the function f to each character of s

	return ptr;
}
