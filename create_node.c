/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelhadj <hbelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 01:35:48 by hbelhadj          #+#    #+#             */
/*   Updated: 2023/04/16 19:44:14 by hbelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*create_node(int value)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	new_node->content = value;
	new_node->index = 0;
	new_node->next = NULL;
	return (new_node);
}
