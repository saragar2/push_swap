#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_list
{
	int			content;
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

#endif