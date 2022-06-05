/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reverse_rotate.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaguiler <aaguiler@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 14:18:56 by aaguiler          #+#    #+#             */
/*   Updated: 2022/06/05 16:35:16 by aaguiler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"
#include <unistd.h>

void	ft_reverse_rotate_a(t_stacks *stack, int print)
{
	if (stack->size_a < 2)
		return ;
	ft_push(stack->stack_a, stack->size_a, stack->stack_a[stack->size_a - 1]);
	if (print)
		write(1, "rra\n", 4);
}

void	ft_reverse_rotate_b(t_stacks *stack, int print)
{
	if (stack->size_b < 2)
		return ;
	ft_push(stack->stack_b, stack->size_b, stack->stack_b[stack->size_b - 1]);
	if (print)
		write(1, "rrb\n", 4);
}

void	ft_reverse_rotate_both(t_stacks *stacks, int print)
{
	ft_reverse_rotate_b(stacks, 0);
	ft_reverse_rotate_a(stacks, 0);
	if (print)
		write(1, "rrr\n", 4);
}
