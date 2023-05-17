/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   short.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelhadj <hbelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:05:46 by hbelhadj          #+#    #+#             */
/*   Updated: 2023/05/05 22:16:17 by hbelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_list *lst)
{
	t_list	*cur;

	cur = lst;
	while (cur)
	{
		if (cur->next != NULL)
		{
			if (cur->content > cur->next->content)
				return (0);
		}
		cur = cur->next;
	}	
	return (1);
}

t_list	*sort_list(t_list **list, t_list **stack_b)
{
	if (ft_lst_size(*list) == 2)
	{
		if ((*list)->content > (*list)->next->content)
			sa(list);
	}
	else if (ft_lst_size(*list) == 3)
		ft_sort_3 (list);
	else if (ft_lst_size(*list) == 4)
		ft_sort_4 (list, stack_b);
	else if (ft_lst_size(*list) == 5)
		ft_sort_5 (list, stack_b);
	else if (ft_lst_size(*list) > 5 && ft_lst_size(*list) <= 100)
	{
		algorithm (list, stack_b);
		algo (list, stack_b);
	}
	else
	{
		algorithm2 (list, stack_b);
		algo (list, stack_b);
	}
	return (*stack_b);
}
