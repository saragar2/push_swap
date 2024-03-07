#include "../push_swap.h"

void	ps_printf(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}
