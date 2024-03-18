/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 03:42:46 by kpuwar            #+#    #+#             */
/*   Updated: 2024/03/18 19:17:56 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t strlen_s = ft_strlen(src);
    size_t strlen_d = ft_strlen(dst);

    if (dstsize <= strlen_d)
        return strlen_s + dstsize;

    size_t i = 0;
    size_t remaining_space = dstsize - strlen_d - 1; // Account for null terminator

    // Append src to dst, ensuring there is enough space for null terminator
    while (src[i] && i < remaining_space)
    {
        dst[strlen_d + i] = src[i];
        i++;
    }
    dst[strlen_d + i] = '\0'; // Null-terminate the concatenated string

    return strlen_s + strlen_d;
}
