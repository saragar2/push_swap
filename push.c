/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saragar2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 18:26:36 by saragar2          #+#    #+#             */
/*   Updated: 2024/04/07 18:26:38 by saragar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_list **a, t_list **b)
{
	t_list	*aux;

	if (!*b)
		return ;
	aux = *b;
	*b = (*b)->next;
	aux->next = *a;
	*a = aux;
	write(1, "pa\n", 3);
}

void	pb(t_list **a, t_list **b)
{
	t_list	*aux;

	if (!*a)
		return ;
	aux = *a;
	*a = (*a)->next;
	aux->next = *b;
	*b = aux;
	write(1, "pb\n", 3);
}
