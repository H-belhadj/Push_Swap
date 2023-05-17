/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelhadj <hbelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 01:36:40 by hbelhadj          #+#    #+#             */
/*   Updated: 2023/04/17 17:16:43 by hbelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list **head)
{
	long int	temp;

	if (*head == NULL || (*head)->next == NULL)
		return ;
	temp = (*head)->content;
	(*head)->content = (*head)->next->content;
	(*head)->next->content = temp;
	write (1, "sa\n", 3);
}

void	sb(t_list **head)
{
	long int	temp;

	if (*head == NULL || (*head)->next == NULL)
		return ;
	temp = (*head)->content;
	(*head)->content = (*head)->next->content;
	(*head)->next->content = temp;
	write (1, "sb\n", 3);
}

void	ss(t_list **head_a, t_list **head_b)
{
	sa (head_a);
	sb (head_b);
	write (1, "ss\n", 3);
}
