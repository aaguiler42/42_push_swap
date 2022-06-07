/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaguiler <aaguiler@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 16:14:35 by aaguiler          #+#    #+#             */
/*   Updated: 2022/06/07 17:10:05 by aaguiler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "push_swap.h"

void	ft_is_operation(char *op, t_stacks *stacks)
{
	if (!ft_strncmp(op, "sa\n", 3))
		ft_swap_a(stacks, 0);
	else if (!ft_strncmp(op, "sb\n", 3))
		ft_swap_b(stacks, 0);
	else if (!ft_strncmp(op, "ss\n", 3))
		ft_swap_both(stacks, 0);
	else if (!ft_strncmp(op, "pa\n", 3))
		ft_push_a(stacks, 0);
	else if (!ft_strncmp(op, "pb\n", 3))
		ft_push_b(stacks, 0);
	else if (!ft_strncmp(op, "ra\n", 3))
		ft_rotate_a(stacks, 0);
	else if (!ft_strncmp(op, "rb\n", 3))
		ft_rotate_b(stacks, 0);
	else if (!ft_strncmp(op, "rr\n", 3))
		ft_rotate_both(stacks, 0);
	else if (!ft_strncmp(op, "rra\n", 4))
		ft_reverse_rotate_a(stacks, 0);
	else if (!ft_strncmp(op, "rrb\n", 4))
		ft_reverse_rotate_b(stacks, 0);
	else if (!ft_strncmp(op, "rrb\n", 4))
		ft_reverse_rotate_both(stacks, 0);
	else
		ft_error(stacks);
}

void	ft_check(t_stacks *stacks)
{
	char	*op;

	op = get_next_line(0);
	while (op)
	{
		ft_is_operation(op, stacks);
		op = get_next_line(0);
	}
	if (ft_is_ordered(stacks) == 0)
		write(1, "KO\n", 3);
	else
		write(1, "OK\n", 3);
}

int	main(int argc, char **argv)
{
	t_stacks	*stacks;

	stacks = ft_inicialize_stacks(++argv, argc - 1);
	if (ft_is_ordered(stacks) == 0)
		ft_check(stacks);
	ft_free_stacks(stacks);
}
