/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   two_three_four_five.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saragar2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 18:29:48 by saragar2          #+#    #+#             */
/*   Updated: 2024/04/07 18:29:49 by saragar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int pos_min_num(t_list **s)
{
    t_list  *aux;
    int     min;
    int     pos;

    aux = *s;
    min = aux->content;
    pos = 1;
    while (aux)
    {
        if (aux->content < min)
            min = aux->content;
        aux = aux->next;
    }
    aux = *s;
    while (aux->content != min)
    {
        pos++;
        aux = aux->next;
    }
    return (pos);
}

void	two(t_list **s)
{
	if ((*s)->content > (*s)->next->content)
		sa(s, 0);
}

void	three(t_list **s)
{
	int max;
    t_list  *aux;

    aux = *s;
    max = max_num(&aux);
    aux = *s;
    if (aux->content == max)
        ra(&aux, 0);
    else if (aux->next->content == max)
        rra(&aux, 0);
    if (aux->content > aux->next->content)
        sa(&aux, 0);
}

void    four(t_list **a, t_list **b)
{
    int pos;

    pos = pos_min_num(a);
    if (pos == 2)
        sa(a, 0);
    else if (pos == 3)
    {
        rra(a, 0);
        rra(a, 0);
    }
    else if (pos == 4)
        rra(a, 0);
    pb(a, b);
    three(a);
    pa(a, b);
}

void    five(t_list **a, t_list **b)
{
    int pos;

    pos = pos_min_num(a);
    if (pos == 2)
        sa(a, 0);
    else if (pos == 3)
    {
        ra(a, 0);
        ra(a, 0);
    }
    if (pos == 4)
    {
        rra(a, 0);
        rra(a, 0);
    }
    if (pos == 5)
        rra(a, 0);
    pb(a, b);
    four(a, b);
    pa(a, b);
}
