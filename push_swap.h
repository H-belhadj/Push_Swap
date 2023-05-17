/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbelhadj <hbelhadj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 01:35:37 by hbelhadj          #+#    #+#             */
/*   Updated: 2023/05/05 17:42:06 by hbelhadj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_list{
	long int		content;
	int				index;
	struct s_list	*next;
}t_list;

t_list		*create_node(int value);
t_list		*ft_linked_list(char *ag[]);
void		ft_index_list(t_list *lst);
void		pa(t_list **head_a, t_list **head_b);
void		pb(t_list **head_a, t_list **head_b);
void		ra(t_list **first);
void		rb(t_list **first);
void		rr(t_list **first_a, t_list **first_b);
void		rra(t_list **first);
void		rrb(t_list **first);
void		rrr(t_list **head_a, t_list **head_b);
void		sa(t_list **head);
void		sb(t_list **head);
void		ss(t_list **head_a, t_list **head_b);
size_t		ft_strlen(const char *s);
char		*ft_strdup(const char *s);
char		*ft_substr(char const *s, unsigned int start, size_t len);
int			ft_isdigists(int c);
int			ft_validint(char *str);
int			ft_isrepeate(int value, t_list *head);
int			ft_lst_size(t_list *lst);
char		**ft_split(char const *s, char c);
int			error(int argc, char *argv[]);
long int	ft_atoi(const char *str);
void		ft_sort_3(t_list **stack_a);
void		ft_sort_4(t_list **stack_a, t_list **stack_b);
void		ft_sort_5(t_list **stack_a, t_list **stack_b);
void		algorithm(t_list **stack_a, t_list **stack_b);
void		algo(t_list **stack_a, t_list **stack_b);
void		algorithm2(t_list **stack_a, t_list **stack_b);
void		free_string(char **str);
void		free_list(t_list *lst);
t_list		*sort_list(t_list **list, t_list **stack_b);
void		value_atoi(long int r, int sign, int i);
int			is_sorted(t_list *lst);

#endif
