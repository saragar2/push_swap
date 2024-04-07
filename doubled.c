/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   doubled.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saragar2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 18:26:01 by saragar2          #+#    #+#             */
/*   Updated: 2024/04/07 18:26:05 by saragar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	turn_negative(t_list **s, int change)
{
	t_list	*aux;

	aux = *s;
	while (aux)
	{
		aux->content += change;
		aux = aux->next;
	}
}

int	check_ordered(t_list *s)
{
	t_list	*aux;

	aux = s;
	while (aux)
	{
		if (aux->content > aux->next->content)
			return (1);
		aux = aux->next;
	}
	return (0);
}

void	doubled_nums(t_list *a)
{
	int		num;
	t_list	*curr;
	t_list	*aux;

	aux = a->next;
	curr = a;
	while (curr->next)
	{
		num = curr->content;
		while (aux)
		{
			if (num == aux->content)
				error_exit();
			aux = aux->next;
		}
		curr = curr->next;
		aux = curr->next;
	}
}
