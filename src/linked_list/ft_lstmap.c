/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 20:15:30 by kpuwar            #+#    #+#             */
/*   Updated: 2024/03/18 22:19:36 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	// Check if input list or function pointers are null
	if (!lst || !f || !del)
		return NULL;

	t_list *node;
	t_list *newlist = NULL; // Initialize the new list

	// Traverse the input list
	while (lst)
	{
		// Apply the function to the content of the current node
		node = ft_lstnew(f(lst->content));

		// Check if memory allocation failed for the new node
		if (!node)
		{
			// If memory allocation failed, clear the new list and return NULL
			ft_lstclear(&newlist, del);
			return NULL;
		}

		// Add the new node to the end of the new list
		ft_lstadd_back(&newlist, node);

		// Move to the next node in the input list
		lst = lst->next;
	}

	// Return the new list
	return newlist;
}
