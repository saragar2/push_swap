/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saragar2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 18:30:15 by saragar2          #+#    #+#             */
/*   Updated: 2024/04/07 18:30:17 by saragar2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ps_printf(char *str)
{
	while (*str != '\0')
	{
		write(2, str, 1);
		str++;
	}
}
