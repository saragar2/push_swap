#include "push_swap.h"

void	two(t_list **s)
{
	if ((*s)->content > (*s)->next->content)
		sa(s, 0);
}