/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 03:45:55 by kpuwar            #+#    #+#             */
/*   Updated: 2024/03/18 10:47:50 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

#define POSITIVE 1
#define NEGATIVE -1

/**
 * @brief Checks if the character is a space.
 * 
 * @param c The character to be checked.
 * @return Non-zero value if c is a space, 0 otherwise.
 */
static int ft_isspace(const char c)
{
	if (c == ' ' || c == '\n' || c == '\r' || c == '\t' || c == '\v' || c == '\f')
		return 1;
	return 0;
}

int ft_atoi(const char *str)
{
    int result = 0;
    int sign = POSITIVE;

    // Skip leading whitespace characters
    while (ft_isspace(*str))
        str++;

    // Handle sign
    if (*str == '-')
    {
        sign = NEGATIVE;
        str++;
    }
    else if (*str == '+')
    {
        str++;
    }

    // Process digits
    while (ft_isdigit(*str))
    {
        result = result * 10 + (*str - '0');
        str++;
    }

    return sign * result;
}
