/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 03:41:36 by kpuwar            #+#    #+#             */
/*   Updated: 2024/03/18 19:43:02 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    if (!dst && !src)
        return NULL; // Return NULL if dst or src pointer are pointing to NULL

    unsigned char *ptr_dst = (unsigned char *)dst;
    const unsigned char *ptr_src = (const unsigned char *)src;

    // Copy memory from src to dst
    for (size_t i = 0; i < n; i++)
        ptr_dst[i] = ptr_src[i];

    return dst;
}
