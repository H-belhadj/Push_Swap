/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelhadj <hbelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 01:36:24 by hbelhadj          #+#    #+#             */
/*   Updated: 2023/05/05 22:15:43 by hbelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	func(t_list **stack, void f(t_list **), void f2(t_list **))
{
	f(stack);
	f2(stack);
}

void	ft_sort_3(t_list **stack_a)
{
	t_list	*f;
	t_list	*s;
	t_list	*t;

	f = *stack_a;
	s = f->next;
	t = s->next;
	if (f->content > s->content
		&& f->content > t->content && s->content > t->content)
		func(stack_a, ra, sa);
	else if (f->content > s->content
		&& f->content > t->content && s->content < t->content)
		ra (stack_a);
	else if (s->content > f->content
		&& s->content > t->content && f->content < t->content)
		func(stack_a, rra, sa);
	else if (s->content > f->content
		&& s->content > t->content && f->content > t->content)
		rra (stack_a);
	else if (t->content > f->content
		&& t->content > s->content && f->content > s->content)
		sa (stack_a);
}
