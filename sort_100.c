/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_100.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelhadj <hbelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 01:36:34 by hbelhadj          #+#    #+#             */
/*   Updated: 2023/04/16 04:24:54 by hbelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	algorithm(t_list **stack_a, t_list **stack_b)
{
	int	range;
	int	i;

	i = 0;
	range = 15;
	while (*stack_a)
	{
		if ((*stack_a)->index <= i)
		{
			pb (stack_a, stack_b);
			rb (stack_b);
			i++;
		}
		else if ((*stack_a)->index > i && (*stack_a)->index < i + range)
		{
			pb(stack_a, stack_b);
			i++;
		}
		else
			ra (stack_a);
	}
}

int	find_index_max(t_list *stack, int max)
{
	int	i;

	i = 0;
	while (stack)
	{
		if (stack->index == max)
			return (i);
		i++;
		stack = stack->next;
	}
	return (0);
}

void	algo(t_list **stack_a, t_list **stack_b)
{
	int	max;

	max = ft_lst_size(*stack_b) - 1;
	while (*stack_b)
	{
		if ((*stack_b)->index == max)
		{
			pa(stack_a, stack_b);
			max--;
		}
		else if (find_index_max(*stack_b, max) < (ft_lst_size(*stack_b) / 2))
			rb(stack_b);
		else
			rrb (stack_b);
	}
}
