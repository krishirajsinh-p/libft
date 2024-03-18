/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 15:01:01 by kpuwar            #+#    #+#             */
/*   Updated: 2024/03/18 22:11:10 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new) // Check if lst or new is NULL
		return;

	if (!(*lst)) // If the list is empty, make new the head
	{
		*lst = new;
		return;
	}

	// Traverse to the end of the list and append new node to the end
	ft_lstlast(*lst)->next = new;
}
