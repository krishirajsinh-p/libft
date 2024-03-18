/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 03:46:18 by kpuwar            #+#    #+#             */
/*   Updated: 2024/03/18 10:51:56 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void *ft_calloc(size_t count, size_t size)
{
  // Check for potential overflow
  if (count * size > SIZE_MAX)
    return (NULL);

  // Allocate memory
  void *ptr = malloc(count * size);
  if (!ptr)
    return NULL;

  // Zero-initialize the allocated memory
  ft_bzero(ptr, count * size);
  return ptr;
}
