/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelhadj <hbelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 01:36:30 by hbelhadj          #+#    #+#             */
/*   Updated: 2023/05/05 22:15:17 by hbelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	dec_index(t_list **stack)
{
	t_list	*tmp;

	tmp = *stack;
	while (tmp)
	{
		tmp->index--;
		tmp = tmp->next;
	}
}

void	ft_sort(t_list **stack_a, t_list **stack_b)
{
	while (ft_lst_size(*stack_a) > 3)
	{
		while ((*stack_a)->index != 1 && (*stack_a)->index != 0)
			ra(stack_a);
		pb(stack_a, stack_b);
	}
	ft_sort_3(stack_a);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
	if (!(is_sorted(*stack_a)))
		sa(stack_a);
}

void	ft_sort_5(t_list **stack_a, t_list **stack_b)
{
	ft_sort (stack_a, stack_b);
	dec_index (stack_a);
}
