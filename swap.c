#include "push_swap.h"

void	sa(t_list **a)
{ 
	int	aux1;
	int	aux2;
	t_list	**aux_l;

	aux_l = a;
	aux1 = (*aux_l)->content;
	*aux_l = (*aux_l)->next;
	aux2 = (*aux_l)->content;
	(*a)->content = aux1;
	*a = (*a)->next;
	(*a)->content = aux2;
}
