/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 05:11:43 by kpuwar            #+#    #+#             */
/*   Updated: 2024/03/18 11:44:14 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void ft_putnbr_fd(int n, int fd)
{
	char arr[10]; // Buffer size to accommodate number in string form
	long ln = n;
	int i = 0;

	// Handle the case when n is zero
	if (ln == 0)
	{
		ft_putchar_fd('0', fd);
		return;
	}

	// Initialize buffer array with escape character
	ft_bzero(arr, 10);

	// Handle negative numbers
	if (ln < 0)
	{
		ft_putchar_fd('-', fd);
		ln *= -1;
	}

	// Extract digits in reverse order
	while (ln > 0)
	{
		arr[i++] = (ln % 10) + '0';
		ln /= 10;
	}

	// Output digits in correct order
	while (i-- > 0)
	{
		ft_putchar_fd(arr[i], fd);
	}
}
