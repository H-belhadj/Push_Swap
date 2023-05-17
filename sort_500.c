/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_500.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelhadj <hbelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 01:36:37 by hbelhadj          #+#    #+#             */
/*   Updated: 2023/04/16 04:18:04 by hbelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	algorithm2(t_list **stack_a, t_list **stack_b)
{
	int	range ;
	int	i;

	range = 35;
	i = 0;
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
