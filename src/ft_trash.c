/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trash.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaguiler <aaguiler@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 19:09:04 by aaguiler          #+#    #+#             */
/*   Updated: 2022/06/05 16:56:11 by aaguiler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
#include <stdio.h>

void	ft_print_struct(t_stacks *stacks)
{
	int	i;

	i = 0;
	printf("Stack A: ");
	while (i < stacks->max_size)
	{
		if (i < stacks->size_a || stacks->stack_a[i])
			printf(" %d ", stacks->stack_a[i]);
		else
			printf(" X ");
		i++;
	}
	printf("\n");
	i = 0;
	printf("Stack B: ");
	while (i < stacks->max_size)
	{
		if (i < stacks->size_b || stacks->stack_b[i])
			printf(" %d ", stacks->stack_b[i]);
		else
			printf(" X ");
		i++;
	}
	printf("\n");
}
