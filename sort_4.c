/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelhadj <hbelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 01:36:27 by hbelhadj          #+#    #+#             */
/*   Updated: 2023/04/16 04:38:56 by hbelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_4(t_list **stack_a, t_list **stack_b)
{
	if ((*stack_a)->index == 0)
		pb (stack_a, stack_b);
	else if ((*stack_a)->next->index == 0)
	{
		sa (stack_a);
		pb (stack_a, stack_b);
	}
	else if ((*stack_a)->next->next->index == 0)
	{
		ra (stack_a);
		sa (stack_a);
		pb (stack_a, stack_b);
	}
	else if ((*stack_a)->next->next->next->index == 0)
	{
		rra (stack_a);
		pb (stack_a, stack_b);
	}
	ft_sort_3 (stack_a);
	pa (stack_a, stack_b);
}
