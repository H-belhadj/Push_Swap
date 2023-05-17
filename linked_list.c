/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelhadj <hbelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 01:36:02 by hbelhadj          #+#    #+#             */
/*   Updated: 2023/04/16 18:51:57 by hbelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	value(int *i, t_list **head)
{
	*i = 0;
	*head = NULL;
}

t_list	*ft_linked_list(char *ag[])
{
	t_list	*head;
	t_list	*tmp;
	char	**str;
	int		i;
	int		j;

	value (&i, &head);
	while (ag[++i])
	{
		j = -1;
		str = ft_split(ag[i], ' ');
		while (str[++j])
		{
			if (head == NULL)
			{
				head = create_node(ft_atoi(str[j]));
				tmp = head;
				continue ;
			}
			tmp->next = create_node(ft_atoi(str[j]));
			tmp = tmp->next;
		}
		free_string (str);
	}
	return (head);
}
