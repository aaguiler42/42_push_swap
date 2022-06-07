/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_order.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaguiler <aaguiler@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 14:04:50 by aaguiler          #+#    #+#             */
/*   Updated: 2022/06/07 16:09:06 by aaguiler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

void	ft_radix(t_stacks *stacks)
{
	int	i;
	int	j;

	i = 0;
	while (ft_is_ordered(stacks) != 1)
	{
		j = 0;
		while (j < stacks->max_size)
		{
			if (stacks->stack_a[0] >> i & 1)
				ft_rotate_a(stacks, 1);
			else
				ft_push_b(stacks, 1);
			j++;
		}
		while (stacks->size_b != 0)
			ft_push_a(stacks, 1);
		i++;
	}
}

void	ft_order_three(t_stacks *st)
{
	if (st->stack_a[0] > st->stack_a[1] && st->stack_a[1] > st->stack_a[2])
	{
		ft_swap_a(st, 1);
		ft_reverse_rotate_a(st, 1);
	}
	else if (st->stack_a[0] > st->stack_a[2] && st->stack_a[2] > st->stack_a[1])
		ft_rotate_a(st, 1);
	else if (st->stack_a[2] > st->stack_a[0] && st->stack_a[0] > st->stack_a[1])
		ft_swap_a(st, 1);
	else if (st->stack_a[1] > st->stack_a[0] && st->stack_a[0] > st->stack_a[2])
		ft_reverse_rotate_a(st, 1);
	else if (st->stack_a[1] > st->stack_a[2] && st->stack_a[2] > st->stack_a[0])
	{
		ft_reverse_rotate_a(st, 1);
		ft_swap_a(st, 1);
	}
}

void	ft_order_five(t_stacks *stacks)
{
	while (!(stacks->stack_a[0] == 0 || stacks->stack_a[0] == 1))
		ft_rotate_a(stacks, 1);
	ft_push_b(stacks, 1);
	while (!(stacks->stack_a[0] == 0 || stacks->stack_a[0] == 1))
		ft_rotate_a(stacks, 1);
	ft_push_b(stacks, 1);
	ft_order_three(stacks);
	ft_push_a(stacks, 1);
	ft_push_a(stacks, 1);
	if (stacks->stack_a[0] != 0)
		ft_swap_a(stacks, 1);
}

void	ft_order(t_stacks *stacks)
{
	if (stacks->max_size == 2)
		ft_swap_a(stacks, 1);
	else if (stacks->max_size == 3)
		ft_order_three(stacks);
	else if (stacks->max_size == 5)
		ft_order_five(stacks);
	else
		ft_radix(stacks);
}
