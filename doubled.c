#include "push_swap.h"

void    turn_negative(t_list **s, int change)
{
    t_list  *aux;

    aux = *s;
    while (aux)
    {
        aux->content += change;
        aux = aux->next;
    }
}

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
