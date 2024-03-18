/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 14:33:04 by kpuwar            #+#    #+#             */
/*   Updated: 2024/03/18 22:09:14 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		// Set the next pointer of the new node to the current head of the list
		new->next = *lst;
		// Update the head of the list to point to the new node
		*lst = new;
	}
}
