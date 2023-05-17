/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelhadj <hbelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 01:36:19 by hbelhadj          #+#    #+#             */
/*   Updated: 2023/04/17 17:18:16 by hbelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_list **first)
{
	t_list	*temp;
	t_list	*save;

	if (*first == NULL || (*first)->next == NULL)
		return ;
	temp = *first;
	while ((*first)->next->next)
		(*first) = (*first)->next;
	save = (*first)->next;
	(*first)->next = 0;
	save->next = temp;
	*first = save;
	write (1, "rra\n", 4);
}

void	rrb(t_list **first)
{
	t_list	*temp;
	t_list	*save;

	if (*first == NULL || (*first)->next == NULL)
		return ;
	temp = *first;
	while ((*first)->next->next)
		(*first) = (*first)->next;
	save = (*first)->next;
	(*first)->next = 0;
	save->next = temp;
	*first = save;
	write (1, "rrb\n", 4);
}

void	rrr(t_list **head_a, t_list **head_b)
{
	rra (head_a);
	rrb (head_b);
	write (1, "rrr\n", 4);
}
