/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 03:44:51 by kpuwar            #+#    #+#             */
/*   Updated: 2024/03/18 11:15:02 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *ptr1 = (const unsigned char *)s1;
    const unsigned char *ptr2 = (const unsigned char *)s2;

    // Iterate over the memory region
    for (size_t i = 0; i < n; i++)
    {
        // Compare each byte of memory
        if (ptr1[i] != ptr2[i])
            return (ptr1[i] - ptr2[i]);
    }

    // If all bytes are equal, return 0
    return 0;
}
