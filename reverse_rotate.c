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
	write(1, "rra\n", 3);
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
	write(1, "rrb\n", 3);
}

// void	rrr(t_list **a, t_list **b)
// {
// 	t_list	*aux_list;
// 	int		num;
// 	int		num2;

// 	if (!*a || !*b)
// 		return ;
// 	aux_list = *a;
// 	num = aux_list->content;
// 	while (aux_list->next)
// 	{
// 		aux_list = aux_list->next;
// 		num2 = aux_list->content;
// 		aux_list->content = num;
// 		num = num2;
// 	}
// 	(*a)->content = num;
// 	aux_list = *b;
// 	num = aux_list->content;
// 	while (aux_list->next)
// 	{
// 		aux_list = aux_list->next;
// 		num2 = aux_list->content;
// 		aux_list->content = num;
// 		num = num2;
// 	}
// 	(*b)->content = num;
// 	write(1, "rra\n", 4);
// }

void	rrr(t_list **a, t_list **b, int flag)
{
	t_list	*aux_list;
	int		num;
	int		num2;

	if (!*a || !*b)
		return ;
	if (flag == 0)
		aux_list = *a;
	else
		aux_list = *b;
	num = aux_list->content;
	while (aux_list->next)
	{
		aux_list = aux_list->next;
		num2 = aux_list->content;
		aux_list->content = num;
		num = num2;
	}
	(*a)->content = num;
	aux_list = *b;
	if (flag == 0)
		rrr(a, b, 1);
	if (flag == 1)
		write(1, "rrr\n", 4);
}
