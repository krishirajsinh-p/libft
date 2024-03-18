/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 18:58:50 by kpuwar            #+#    #+#             */
/*   Updated: 2024/03/18 22:13:35 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (!lst || !del) // Check if lst or del is NULL
		return;

	t_list *next;

	while (*lst) // Traverse the list
	{
		next = (*lst)->next;	 // Store the next pointer before deletion
		ft_lstdelone(*lst, del); // Delete the current node
		*lst = next;			 // Move to the next node
	}
}
