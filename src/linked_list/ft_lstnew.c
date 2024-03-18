/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 06:01:24 by kpuwar            #+#    #+#             */
/*   Updated: 2024/03/18 22:06:32 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

t_list *ft_lstnew(void *content)
{
	// Allocate memory for the new node
	t_list *node = malloc(sizeof(t_list));
	if (!node) // If memory allocation fails
		return NULL;

	// Initialize the node with the provided content and NULL next pointer
	node->content = content;
	node->next = NULL;

	return node; // Return the newly created node
}
