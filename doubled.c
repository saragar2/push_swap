#include "push_swap.h"

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
