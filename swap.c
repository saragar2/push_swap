/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saragar2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 18:29:35 by saragar2          #+#    #+#             */
/*   Updated: 2024/04/07 18:29:36 by saragar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list **a, int flag)
{
	int	aux;

	aux = (*a)->next->content;
	(*a)->next->content = (*a)->content;
	(*a)->content = aux;
	if (flag == 0)
		write(1, "sa\n", 3);
}

void	sb(t_list **b, int flag)
{
	int	aux;

	aux = (*b)->next->content;
	(*b)->next->content = (*b)->content;
	(*b)->content = aux;
	if (flag == 0)
		write(1, "sb\n", 3);
}

void	ss(t_list **a, t_list **b)
{
	sa(a, 1);
	sb(b, 1);
	write(1, "ss\n", 3);
}
