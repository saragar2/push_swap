/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saragar2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 18:26:15 by saragar2          #+#    #+#             */
/*   Updated: 2024/04/07 18:26:17 by saragar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_exit(void)
{
	ps_printf("Error");
	exit(1);
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

void	decide_alg(int count, t_list **a, t_list **b)
{
	if (check_ordered(*a))
	{
		if (count == 1)
			return ;
		else if (count == 2)
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
}

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		count;
	int		i;

	i = 0;
	count = 0;
	if (argc == 1)
		return (0);
	while (argv[i])
	{
		if (ft_strlen(argv[i++]) == 0)
			error_exit();
	}
	stack_a = split_args(argv, &count);
	if (!stack_a)
		exit(0);
	doubled_nums(stack_a);
	decide_alg(count, &stack_a, &stack_b);
	exit(0);
}
