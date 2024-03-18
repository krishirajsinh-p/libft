/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 14:47:42 by kpuwar            #+#    #+#             */
/*   Updated: 2024/03/18 22:12:23 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

t_list *ft_lstlast(t_list *lst)
{
	if (!lst) // If the list is empty, return NULL
		return NULL;

	while (lst->next) // Traverse to the last node
		lst = lst->next;

	return lst;
}
