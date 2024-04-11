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

void	two(t_list **s)
{
	if ((*s)->content > (*s)->next->content)
		sa(s, 0);
}

void	three(t_list **s)
{
	if ((*s)->content > (*s)->next->content)
		sa(s, 0);
	if ((*s)->next->next->content < (*s)->content)
		rra(s, 0);
	else if ((*s)->next->next->content < (*s)->next->content)
	{
		rra(s, 0);
		sa(s, 0);
	}
}

void	four(t_list **a, t_list **b)
{
	int	num_b;
    int flag;

    flag = 0;
	pb(a, b);
	three(a);
	num_b = inner_sort(a, b, &flag);
	if (flag == 0 && num_b > (*a)->next->next->content)
	{
		pa(a, b);
		ra(a, 0);
	}
}

int	inner_sort(t_list **a, t_list **b, int *flag)
{
	int	num_b;

	num_b = (*b)->content;
	if (num_b < (*a)->content)
    {
		pa(a, b);
        *flag = 1;
    }
	else if (num_b < (*a)->next->content)
	{
		pa(a, b);
		sa(a, 0);
        *flag = 1;
	}
	else if (num_b < (*a)->next->next->content)
	{
		rra(a, 0);
        rra(a, 0);
		pa(a, b);
		rra(a, 0);
		rra(a, 0);
        *flag = 1;
	}
	return (num_b);
}

void	five(t_list **a, t_list **b)
{
	int	num_b;
    int flag;

    flag = 0;
	pb(a, b);
	four(a, b);
	num_b = inner_sort(a, b, &flag);
    if (flag == 0)
    {
	    if (num_b < (*a)->next->next->next->content && num_b > (*a)->next->content)
	    {
		    rra(a, 0);
    		pa(a, b);
    		ra(a, 0);
    		ra(a, 0);
    	}
    	if (num_b > (*a)->next->next->next->content)
    	{
    		pa(a, b);
    		ra(a, 0);
    	}
    }
}
