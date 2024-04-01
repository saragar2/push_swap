#include "push_swap.h"

int	count_list(t_list **stack)
{
	t_list	*aux;
	int		count;

	aux = *stack;
	count = 0;
	while (aux)
	{
		aux = aux->next;
		count++;
	}
	return(count);
}

int	measure(int count)
{
	int bits;

	bits = 0;
	while ((count >> bits) != 0)
		bits++;
	return (bits);
}

void	radix_sort(int  count_a, t_list **a, t_list **b)
{
	int	i;
	int	j;
	int	num;

	i = 0;
	while (i < measure(count_a))
	{
		j = 0;
		while (j < count_a)
		{
			num = (*a)->content;
			if ((num >> i) & 1)
				ra(a, 0);
			else
				pb(a, b);
			++j;
		}
		while (count_list(b) > 0)
			pa(a, b);
		++i;
	}
}