#include "push_swap.h"

void	sa(t_list **a)
{ 
	int	aux;

	aux = (*a)->next->content;
	(*a)->next->content = (*a)->content;
	(*a)->content = aux;
	write(1, "sa\n", 3);
}

void	sb(t_list **b)
{ 
	int	aux;

	aux = (*b)->next->content;
	(*b)->next->content = (*b)->content;
	(*b)->content = aux;
	write(1, "sb\n", 3);
}

void	ss(t_list **a, t_list **b)
{ 
	int	aux;

	aux = (*a)->next->content;
	(*a)->next->content = (*a)->content;
	(*a)->content = aux;
	aux = (*b)->next->content;
	(*b)->next->content = (*b)->content;
	(*b)->content = aux;
	write(1, "ss\n", 3);
}