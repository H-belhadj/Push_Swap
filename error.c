/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelhadj <hbelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 01:35:51 by hbelhadj          #+#    #+#             */
/*   Updated: 2023/05/05 15:44:38 by hbelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_short(char **str, int j, long int value, t_list *head)
{
	while (str[++j])
	{
		if (!ft_validint(str[j]))
		{
			write(2, "Error\n", 6);
			exit(1);
		}
		value = ft_atoi(str[j]);
		if (ft_isrepeate(value, head))
		{
			write(2, "Error\n", 6);
			exit(1);
		}
	}
}

void	error_loop(char *argv[], t_list *head, long int value, char **str)
{
	int	i;
	int	j;

	i = 0;
	while (argv[++i])
	{
		j = -1;
		str = ft_split(argv[i], ' ');
		if (!str || ft_strlen(argv[i]) == 0)
			exit (1);
		error_short(str, j, value, head);
		free_string(str);
	}
}

int	error(int argc, char *argv[])
{
	t_list		*head;
	char		**str;
	long int	value;

	if (argc < 2)
		return (1);
	str = NULL;
	value = 0;
	head = ft_linked_list(argv);
	error_loop(argv, head, value, str);
	free_list(head);
	return (0);
}
