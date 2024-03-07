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

int			ft_atoi(const char *str, int *control);
t_list		*ft_lstnew(int content);
char		**ft_split(char const *s, char c);
void		ft_lstadd_back(t_list **lst, t_list *new);
t_list		*ft_lstlast(t_list *lst);
t_list		*split_args(char **argv);
void		ps_printf(char *str);
int			error_cases(char *no_spaces);
void		free_stack(t_list *a);
void		sa(t_list **a);
void		sb(t_list **b);
void		ss(t_list **a, t_list **b);
void		pa(t_list **a, t_list **b);
void		pb(t_list **a, t_list **b);
void		ra(t_list **a);
void		ra(t_list **b);
void		rr(t_list **a, t_list **b);
void		rra(t_list **a, int flag);
void		rra(t_list **b, int flag);
void		rrr(t_list **a, t_list **b);

#endif