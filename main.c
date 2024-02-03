#include "push_swap.h"

int	main(int argc, char **argv)
{
	int	i;
	int j;
	char	**no_spaces;
	t_list	*stack_a;
	t_list	*list_aux;

	argc = 1;
	i = 1;
	stack_a = ft_lstnew(0);
	while (argv[i])
	{
		j = 0;
		no_spaces = ft_split(argv[i], ' ');
		while (no_spaces[j])
		{
			list_aux = ft_lstnew(ft_atoi(no_spaces[j]));
			ft_lstadd_back(&stack_a, list_aux);
			//printf("%d", (ft_lstlast(stack_a))->content);
			j++;
		}
		i++;
	}
	while (stack_a)
	{
		printf("%i", stack_a->content);
		stack_a = stack_a->next;
	}
	return (0);
}
