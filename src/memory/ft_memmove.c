/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 03:41:59 by kpuwar            #+#    #+#             */
/*   Updated: 2024/03/18 11:28:03 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    char *d = (char *)dst;
    const char *s = (const char *)src;

    // Check if src and dst regions overlap
    if (src < dst)
    {
        // Move from the end to the beginning to avoid overwriting data
        d += len - 1;
        s += len - 1;
        while (len--)
            *(d--) = *(s--);
    }
    else
    {
        // Call ft_memcpy if src and dst do not overlap
        ft_memcpy(dst, src, len);
    }

    return dst;
}
