/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelhadj <hbelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 01:35:59 by hbelhadj          #+#    #+#             */
/*   Updated: 2023/04/16 18:53:05 by hbelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*r;

	i = 0;
	r = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!(r))
		return (NULL);
	while (*s)
	{
		r[i] = *s;
		s++;
		i++;
	}
	r[i] = '\0';
	return (r);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*results;

	if (s == NULL)
		return (ft_strdup("\0"));
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	i = 0;
	if (len >= ft_strlen(s) - start)
		results = (char *)malloc(sizeof(char) * ft_strlen(s) - start + 1);
	else
		results = (char *)malloc(sizeof(char) * (len + 1));
	if (!results)
		return (NULL);
	s = s + start;
	while (s[i] && i < len)
	{
		results[i] = s[i];
		i++;
	}
	*(results + i) = '\0';
	return (results);
}

int	ft_count_world(char const *s, char c)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			cnt++;
		i++;
	}
	return (cnt);
}

static	char	**ft_split_world(char const *s, char c)
{
	char	**dest;
	int		i;
	int		j;
	int		simobb;

	dest = malloc(sizeof(char *) * (ft_count_world(s, c) + 1));
	if (!dest)
		return (NULL);
	i = 0;
	j = 0;
	while (j < ft_count_world(s, c))
	{
		while (s[i] && s[i] == c)
			i++;
		simobb = 0;
		while (s[i] && s[i] != c)
		{
			simobb++;
			i++;
		}
		dest[j] = ft_substr(s, (i - simobb), simobb);
		j++;
	}
	dest[j] = NULL;
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	char	**dest;

	if (!s)
		return (NULL);
	dest = ft_split_world(s, c);
	return (dest);
}
