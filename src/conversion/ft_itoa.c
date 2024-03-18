/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 00:13:58 by kpuwar            #+#    #+#             */
/*   Updated: 2024/03/18 11:08:59 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

/**
 * @brief Counts the number of characters required to store the number in string form.
 *
 * @param n Number for which the character has to be counted.
 * @return Number of characters.
 */
static int ft_count_characters(long n)
{
	int count = (n <= 0) ? 1 : 0; // Initialize count to 1 if n is non-positive

	// Count the number of digits in n
	while (n != 0)
	{
		count++;
		n /= 10;
	}

	return count;
}

char *ft_itoa(int n)
{
	long ln = n; // Convert to long to handle INT_MIN
	int digits = ft_count_characters(ln);
	char *ptr = ft_calloc(digits + 1, sizeof(char)); // Allocate memory for the string

	if (!ptr)
		return NULL; // Returns NULL if memory allocation fails

	if (ln == 0)
	{
		ptr[0] = '0';
		return ptr;
	}

	if (ln < 0)
	{
		ptr[0] = '-'; // Set the sign character
		ln = -ln;	  // Make ln positive for further processing
	}

	// Convert each digit of ln to characters and store in ptr
	while (ln != 0)
	{
		ptr[--digits] = (char)((ln % 10) + '0');
		ln /= 10;
	}

	return ptr;
}
