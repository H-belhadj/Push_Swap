/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelhadj <hbelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 01:36:43 by hbelhadj          #+#    #+#             */
/*   Updated: 2023/04/16 02:07:32 by hbelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int	ft_isdigists(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

int	ft_validint(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		i++;
		if (!ft_isdigists(str[i]))
			return (0);
	}
	while (str[i])
	{
		if (!ft_isdigists(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int	ft_isrepeate(int value, t_list *head)
{
	t_list	*current ;
	int		i;

	current = head;
	i = 0;
	while (current != NULL)
	{
		if (current->content == value)
			i++;
		current = current->next;
	}
	if (i > 1)
		return (1);
	return (0);
}
