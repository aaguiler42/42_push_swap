/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_order.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaguiler <aaguiler@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 14:04:50 by aaguiler          #+#    #+#             */
/*   Updated: 2022/06/06 14:04:53 by aaguiler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include <unistd.h>

void	ft_order_three(t_stacks *st)
{
	if (st->stack_a[0] == 2 && st->stack_a[1] == 1 && st->stack_a[2] == 0)
	{
		ft_swap_a(st, 1);
		ft_reverse_rotate_a(st, 1);
	}
	else if (st->stack_a[0] == 2 && st->stack_a[1] == 0 && st->stack_a[2] == 1)
		ft_rotate_a(st, 1);
	else if (st->stack_a[0] == 1 && st->stack_a[1] == 0 && st->stack_a[2] == 2)
		ft_swap_a(st, 1);
	else if (st->stack_a[0] == 1 && st->stack_a[1] == 2 && st->stack_a[2] == 0)
		ft_reverse_rotate_a(st, 1);
	else if (st->stack_a[0] == 0 && st->stack_a[1] == 2 && st->stack_a[2] == 1)
	{
		ft_push_b(st, 1);
		ft_swap_a(st, 1);
		ft_push_a(st, 1);
	}
}

void	ft_order(t_stacks *stacks)
{
	ft_print_struct(stacks);
	if (stacks->max_size == 2)
		ft_swap_a(stacks, 1);
	else if (stacks->max_size == 3)
		ft_order_three(stacks);
	else
		ft_radix(stacks);
	ft_print_struct(stacks);
}
