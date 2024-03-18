/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 03:37:15 by kpuwar            #+#    #+#             */
/*   Updated: 2024/03/18 11:29:38 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void *ft_memset(void *b, int c, size_t len)
{
    unsigned char *ptr = (unsigned char *)b;
    unsigned char uc = (unsigned char)c;

    // Set each byte of memory to the specified value
    while (len-- > 0)
        *ptr++ = uc;

    return b;
}
