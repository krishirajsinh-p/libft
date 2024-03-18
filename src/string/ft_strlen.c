/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 03:40:41 by kpuwar            #+#    #+#             */
/*   Updated: 2024/03/18 19:42:02 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

size_t ft_strlen(const char *s)
{
	size_t i = 0;

	// Iterate through the string until reaching the null terminator
	while (s[i] != '\0')
		i++;

	return i;
}
