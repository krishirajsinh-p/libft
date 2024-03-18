/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 03:37:11 by kpuwar            #+#    #+#             */
/*   Updated: 2024/03/18 11:55:25 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	if (s && f)
	{
		size_t len = ft_strlen(s);
		for (size_t i = 0; i < len; i++) // Iterate over each character in the string
		{
			f(i, &s[i]); // Call the function pointer f with the current index and character
		}
	}
}
