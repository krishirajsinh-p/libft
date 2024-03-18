/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 03:43:22 by kpuwar            #+#    #+#             */
/*   Updated: 2024/03/18 19:38:31 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/**
 * @brief Checks if the character is an lowercase alphabetic character.
 *
 * @param c The character to be checked.
 * @return Non-zero value if c is a lowercase, 0 otherwise.
 */
static int ft_islower(char c)
{
	return (c >= 'a' && c <= 'z');
}

int ft_toupper(int c)
{
	if (ft_islower(c))
		return ((c - 'a') + 'A'); // Convert uppercase to lowercase and returns change
	return (c);					  // Return unchanged for other characters
}
