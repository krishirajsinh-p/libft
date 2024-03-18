/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 14:42:38 by kpuwar            #+#    #+#             */
/*   Updated: 2024/03/18 22:09:11 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int ft_lstsize(t_list *lst)
{
	int size = 0;

	while (lst)
	{
		size++;
		lst = lst->next;
	}

	return size;
}
