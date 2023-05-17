/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelhadj <hbelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 18:10:23 by hbelhadj          #+#    #+#             */
/*   Updated: 2023/05/05 22:19:36 by hbelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	atoi_values(long int *r, int *sign, int *i)
{
	*r = 0;
	*sign = 1;
	*i = 0;
}

int	is_minint(const char	*str)
{
	int		i;
	char	*s;

	i = 0;
	s = "2147483648";
	while (str[i] && s[i] && str[i] == s[i])
		i++;
	if (s[i] || str[i])
		return (0);
	return (1);
}

long int	ft_atoi(const char *str)
{
	long int	r;
	int			sign;
	int			i;

	atoi_values (&r, &sign, &i);
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign *= -1;
	if (sign == -1 && is_minint(str + i))
		return (-2147483648);
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = (r * 10) + (str[i] - 48);
		if (r > INT_MAX || r < 0)
		{
			write(2, "Error\n", 6);
			exit(1);
		}
		i++;
	}
	return (r * sign);
}
