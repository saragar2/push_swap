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
