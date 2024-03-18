/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 20:10:44 by kpuwar            #+#    #+#             */
/*   Updated: 2024/03/18 22:17:24 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f) // Check if lst or apply_func is NULL
		return;

	while (lst)
	{
		f(lst->content); // Apply the function to the content of the current node
		lst = lst->next; // Move to the next node
	}
}
