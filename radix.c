/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saragar2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 18:27:24 by saragar2          #+#    #+#             */
/*   Updated: 2024/04/07 18:27:26 by saragar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_list(t_list **stack)
{
	t_list	*aux;
	int		count;

	aux = *stack;
	count = 0;
	while (aux)
	{
		aux = aux->next;
		count++;
	}
	return (count);
}

int	max_num(t_list **stack)
{
	t_list	*s;
	int		max;

	s = *stack;
	max = s->content;
	while (s)
	{
		if (s->content > max)
			max = s->content;
		s = s->next;
	}
	return (max);
}

int	measure(int count)
{
	int	bits;

	bits = 0;
	while ((count >> bits) != 0)
		bits++;
	return (bits);
}

int	negative_check(t_list **s)
{
	int		change;
	t_list	*aux;

	aux = *s;
	change = 0;
	while (aux)
	{
		if (aux->content < change)
			change = aux->content;
		aux = aux->next;
	}
	aux = *s;
	while (aux && change < 0)
	{
		aux->content += change * -1;
		aux = aux->next;
	}
	return (change);
}

void	radix_sort(int count_a, t_list **a, t_list **b)
{
	int	i;
	int	j;
	int	change;
	int	num;

	i = 0;
	change = negative_check(a);
	while (i < measure(max_num(a)))
	{
		j = 0;
		while (j < count_a)
		{
			num = (*a)->content;
			if ((num >> i) & 1)
				ra(a, 0);
			else
				pb(a, b);
			++j;
		}
		while (count_list(b) > 0)
			pa(a, b);
		++i;
	}
	if (change < 0)
		turn_negative(a, change);
}
