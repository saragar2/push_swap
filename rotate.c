/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saragar2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 18:28:25 by saragar2          #+#    #+#             */
/*   Updated: 2024/04/07 18:28:26 by saragar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list **a, int flag, int count)
{
	int		aux_content;
	t_list	*to_free;

	if (!*a)
		return ;
	to_free = *a;
	aux_content = (*a)->content;
	ft_lstadd_back(a, ft_lstnew(aux_content));
	(*a) = (*a)->next;
	if (count > 5)
		free(to_free);
	if (flag == 0)
		write(1, "ra\n", 3);
}

void	rb(t_list **b, int flag)
{
	int		aux_content;
	t_list	*to_free;

	if (!*b)
		return ;
	to_free = *b;
	aux_content = (*b)->content;
	ft_lstadd_back(b, ft_lstnew(aux_content));
	(*b) = (*b)->next;
	free (to_free);
	if (flag == 0)
		write(1, "rb\n", 3);
}

void	rr(t_list **a, t_list **b, int count)
{
	ra(a, 1, count);
	rb(b, 1);
	write(1, "rr\n", 3);
}
