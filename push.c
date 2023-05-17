/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelhadj <hbelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 01:36:15 by hbelhadj          #+#    #+#             */
/*   Updated: 2023/04/17 17:18:56 by hbelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_list **head_a, t_list **head_b)
{
	t_list	*tmp;

	tmp = *head_b;
	if (*head_b == NULL)
		return ;
	*head_b = (*head_b)->next;
	if (*head_a == NULL)
	{
		*head_a = tmp;
		(*head_a)->next = NULL;
	}
	else
	{
		tmp->next = *head_a;
		*head_a = tmp;
	}
	write (1, "pa\n", 3);
}

void	pb(t_list **head_a, t_list **head_b)
{
	t_list	*tmp;

	tmp = *head_a;
	if (*head_a == NULL)
		return ;
	*head_a = (*head_a)->next;
	if (*head_b == NULL)
	{
		*head_b = tmp;
		(*head_b)->next = NULL;
	}
	else
	{
		tmp->next = *head_b;
		*head_b = tmp;
	}
	write (1, "pb\n", 3);
}
