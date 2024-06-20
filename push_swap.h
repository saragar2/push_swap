/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saragar2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 18:26:52 by saragar2          #+#    #+#             */
/*   Updated: 2024/04/07 18:27:04 by saragar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_list
{
	int				content;
	struct s_list	*next;
}				t_list;

size_t		ft_strlen(const char *s);
int			ft_atoi(const char *str, int *control);
t_list		*ft_lstnew(int content);
char		**ft_split(char const *s, char c);
void		ft_lstadd_back(t_list **lst, t_list *new);
t_list		*ft_lstlast(t_list *lst);
t_list		*split_args(char **argv, int *count);
void		ps_printf(char *str);
void		error_exit(void);
int			error_cases(char **no_spaces, t_list *stack, int j);
void		sa(t_list **a, int flag);
void		sb(t_list **b, int flag);
void		ss(t_list **a, t_list **b);
void		pa(t_list **a, t_list **b);
void		pb(t_list **a, t_list **b);
void		ra(t_list **a, int flag, int count);
void		rr(t_list **a, t_list **b, int count);
void		rra(t_list **a, int flag);
void		rra(t_list **b, int flag);
void		rrr(t_list **a, t_list **b);
void		decide_alg(int count, t_list **a, t_list **b);
void		two(t_list **s);
void		three(t_list **s, int count);
void		four(t_list **a, t_list **b, int count);
void		five(t_list **a, t_list **b, int count);
int			inner_sort(t_list **a, t_list **b, int *flag);
int			max_num(t_list **stack);
int			pos_min_num(t_list **s);
int			measure(int count);
void		radix_sort(int count_a, t_list **a, t_list **b);
void		doubled_nums(t_list *a);
int			negative_check(t_list **s);
void		turn_negative(t_list **s, int change);
int			check_ordered(t_list *s);
void		free_stack(t_list *stack);

#endif
