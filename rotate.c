/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelhadj <hbelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 01:36:21 by hbelhadj          #+#    #+#             */
/*   Updated: 2023/05/05 22:17:15 by hbelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list **head)
{
	t_list	*temp;
	t_list	*traverser;

	if (*head == NULL || ft_lst_size(*head) < 2)
		return ;
	temp = *head;
	(*head) = (*head)->next;
	traverser = *head;
	while (traverser->next)
		traverser = traverser->next;
	traverser->next = temp;
	temp->next = NULL;
	write (1, "ra\n", 3);
}

void	rb(t_list **head)
{
	t_list	*temp;
	t_list	*traverser;

	if (*head == NULL || ft_lst_size(*head) < 2)
		return ;
	temp = *head;
	(*head) = (*head)->next;
	traverser = *head;
	while (traverser->next)
		traverser = traverser->next;
	traverser->next = temp;
	temp->next = NULL;
	write (1, "rb\n", 3);
}

void	rr(t_list **first_a, t_list **first_b)
{
	ra (first_a);
	rb (first_b);
	write (1, "rr\n", 3);
}
