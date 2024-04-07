/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saragar2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 20:00:20 by saragar2          #+#    #+#             */
/*   Updated: 2023/09/21 20:40:17 by saragar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_atoi(const char *str, int *control)
{
	long int	nb;
	int			minus;

	nb = 0;
	minus = 1;
	if (*str == '+' || *str == '-')
	{
		if (*(str + 1) == '+' || *(str + 1) == '-')
			*control = 1;
		else if (*str == '-')
			minus = -1;
		if (*(str + 1) == '\0' || *(str + 1) == '\0')
			*control = 1;
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		nb = nb * 10 + (*str - '0');
		str++;
	}
	if (*str && (*str < 48 || *str > 57))
		*control = 1;
	if ((nb * minus) > 2147483647 || (nb * minus) < -2147483648)
		*control = 1;
	return (nb * minus);
}
