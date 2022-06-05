/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaguiler <aaguiler@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 11:22:14 by aaguiler          #+#    #+#             */
/*   Updated: 2022/06/05 12:16:44 by aaguiler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"
#include <unistd.h>

void	ft_swap_a(t_stacks *stacks)
{
	int	aux;

	if (stacks->size_a < 2)
		return ;
	aux = stacks->stack_a[0];
	stacks->stack_a[0] = stacks->stack_a[1];
	stacks->stack_a[1] = aux;
	write(1, "sa\n", 3);
}

void	ft_swap_b(t_stacks *stacks)
{
	int	aux;

	if (stacks->size_b < 2)
		return ;
	aux = stacks->stack_b[0];
	stacks->stack_b[0] = stacks->stack_b[1];
	stacks->stack_b[1] = aux;
	write(1, "sb\n", 3);
}

void	ft_swap_both(t_stacks *stacks)
{
	ft_swap_a(stacks);
	ft_swap_b(stacks);
}
