/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 03:43:20 by kpuwar            #+#    #+#             */
/*   Updated: 2024/03/18 19:37:47 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/**
 * @brief Checks if the character is an uppercase alphabetic character.
 *
 * @param c The character to be checked.
 * @return Non-zero value if c is a uppercase, 0 otherwise.
 */
static int ft_isupper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

int ft_tolower(int c)
{
	if (ft_isupper(c))
		return ((c - 'A') + 'a'); // Convert uppercase to lowercase and returns change
	return (c);					  // Return unchanged for other characters
}
