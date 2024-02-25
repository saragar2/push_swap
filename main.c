#include "push_swap.h"

void	error_exit(void)
{
	ps_printf("Error\n");
	exit(0);
}
int	error_cases(char *no_spaces)
{
	int	result;
	int	control;

	control = 0;
	result = ft_atoi(no_spaces, &control);
	if (control == 1)
		error_exit();
	return (result);
}

t_list	*split_args(char **argv)
{
	int		i;
	int		j;
	char	**no_spaces;
	t_list	*list_aux;
	t_list	*stack_a;

	i = 1;
	while (argv[i])
	{
		j = 0;
		no_spaces = ft_split(argv[i], ' ');
		while (no_spaces[j])
		{
			list_aux = ft_lstnew(error_cases(no_spaces[j]));
			ft_lstadd_back(&stack_a, list_aux);
			j++;
		}
		i++;
	}
	return (stack_a);
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;

	argc = 1;
	stack_a = split_args(argv);
	sa(&stack_a);
	while (stack_a)
	{
		printf("%i\n", stack_a->content);
		stack_a = stack_a->next;
	}
	return (0);
}
