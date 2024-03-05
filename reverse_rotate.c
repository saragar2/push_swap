#include "push_swap.h"

void	rra(t_list **a)
{
	t_list	*aux_list;
	int		num;
	int		num2;

	if (!*a)
		return ;
	aux_list = *a;
	num = aux_list->content;
	while (aux_list->next)
	{
		aux_list = aux_list->next;
		num2 = aux_list->content;
		aux_list->content = num;
		num = num2;
	}
	(*a)->content = num;
}

void	rrb(t_list **b)
{
	t_list	*aux_list;
	int		num;
	int		num2;

	if (!*b)
		return ;
	aux_list = *b;
	num = aux_list->content;
	while (aux_list->next)
	{
		aux_list = aux_list->next;
		num2 = aux_list->content;
		aux_list->content = num;
		num = num2;
	}
	(*b)->content = num;
}

void	rrr(t_list **a, t_list **b)
{
	if (!*a || !*b)
		return ;
	rra(a);
	rrb(b);
}
