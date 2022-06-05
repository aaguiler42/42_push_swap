/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaguiler <aaguiler@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 12:25:39 by aaguiler          #+#    #+#             */
/*   Updated: 2022/06/05 14:58:20 by aaguiler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"
#include <unistd.h>

void	ft_push(int *stack, int stack_len, int n)
{
	int	i;

	i = stack_len - 1;
	while (i > 0)
	{
		stack[i] = stack[i - 1];
		i++;
	}
	stack[0] = n;
}

void	ft_rem_el(int *stack, int stack_len)
{
	int	i;

	i = 0;
	while (i < stack_len - 1)
	{
		stack[i] = stack[i + 1];
		i++;
	}
	stack[stack_len - 1] = 0;
}

void	ft_push_a(t_stacks *stacks, int print)
{
	if (stacks->size_b == 0)
		return ;
	ft_push(stacks->stack_a, stacks->size_a, stacks->stack_b[0]);
	stacks->size_a++;
	ft_rem_el(stacks->stack_b, stacks->size_b);
	stacks->size_b--;
	if (print)
		write(1, "pa\n", 3);
}

void	ft_push_b(t_stacks *stacks, int print)
{
	if (stacks->size_a == 0)
		return ;
	ft_push(stacks->stack_b, stacks->size_b, stacks->stack_a[0]);
	stacks->size_b++;
	ft_rem_el(stacks->stack_a, stacks->size_a);
	stacks->size_a--;
	if (print)
		write(1, "pb\n", 3);
}
