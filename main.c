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

t_list	*split_args(char **argv, int *count)
{
	int		i;
	int		j;
	char	**no_spaces;
	t_list	*list_aux;
	t_list	*stack_a;

	i = 1;
	stack_a = NULL;
	while (argv[i])
	{
		j = 0;
		no_spaces = ft_split(argv[i], ' ');
		while (no_spaces[j])
		{
			list_aux = ft_lstnew(error_cases(no_spaces[j]));
			ft_lstadd_back(&stack_a, list_aux);
			free (no_spaces[j]);
			j++;
			(*count)++;
		}
		free(no_spaces);
		i++;
	}
	return (stack_a);
}

void leaks()
{
	system("leaks -q push_swap");
}

void	decide_alg(int count, t_list **a, t_list **b)
{
	if (count == 2)
		two(a);
	else if (count == 3)
		three(a);
	else if (count == 4)
		four(a, b);
	else if (count == 5)
		five(a, b);
	else
		radix_sort(count, a, b);
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	t_list	*aux;
	int		count;

	(void)argc;
	count = 0;
	stack_a = split_args(argv, &count);
	decide_alg(count, &stack_a, &stack_b);
	printf("----STACK A----\n");
	aux = stack_a;
	while (aux)
	{
		printf("%i\n", aux->content);
		aux = aux->next;
	}
	printf("----STACK B----\n");
	aux = stack_b;
	while (aux)
	{
		printf("%i\n", aux->content);
		aux = aux->next;
	}
	printf("-------------COUNT: %i\n", count);
	atexit(leaks);
	exit(0);
}
