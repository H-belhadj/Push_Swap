/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelhadj <hbelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 01:36:09 by hbelhadj          #+#    #+#             */
/*   Updated: 2023/05/05 20:43:33 by hbelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_idx(t_list *lst, long num)
{
	int	idx;

	idx = 0;
	while (lst)
	{
		if (lst->content < num)
			idx++;
		lst = lst->next;
	}
	return (idx);
}

void	ft_index_list(t_list *lst)
{
	t_list	*cur;

	cur = lst;
	while (cur != NULL)
	{
		cur->index = get_idx(lst, cur->content);
		cur = cur->next;
	}
}

int	ft_lst_size(t_list *lst)
{
	int	len;

	len = 0;
	while (lst)
	{
		len++;
		lst = lst->next;
	}
	return (len);
}

int	main(int argc, char *argv[])
{
	t_list		*list;
	t_list		*stack_b;

	if (error(argc, argv))
		return (1);
	list = ft_linked_list(argv);
	stack_b = NULL;
	ft_index_list(list);
	if (!is_sorted(list))
		sort_list(&list, &stack_b);
	free_list(list);
	return (0);
}
