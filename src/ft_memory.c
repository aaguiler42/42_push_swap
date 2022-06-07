/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memory.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaguiler <aaguiler@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 19:06:03 by aaguiler          #+#    #+#             */
/*   Updated: 2022/06/07 16:09:03 by aaguiler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

void	ft_free_stacks(t_stacks *stacks)
{
	free(stacks->stack_a);
	free(stacks->stack_b);
	free(stacks);
	exit(0);
}

void	ft_free_struct(t_stacks *stacks)
{
	free(stacks);
	exit(0);
}

void	ft_free_a_stack(t_stacks *stacks)
{
	free(stacks->stack_a);
	free(stacks);
	exit(0);
}

void	ft_error(t_stacks *stacks)
{
	write(1, "Error", 5);
	ft_free_stacks(stacks);
}

t_stacks	*ft_inicialize_stacks(char **numbers, int n)
{
	struct s_stacks	*stacks;
	int				i;

	stacks = malloc(sizeof(struct s_stacks));
	if (!stacks)
		exit(0);
	if (n != 1)
		stacks->max_size = n;
	else
		stacks->max_size = ft_count_words(numbers[0], ' ');
	stacks->size_a = stacks->max_size;
	stacks->size_b = 0;
	stacks->stack_a = ft_calloc((stacks->max_size + 1), sizeof(int));
	if (!stacks->stack_a)
		ft_free_struct(stacks);
	stacks->stack_b = ft_calloc((stacks->max_size + 1), sizeof(int));
	if (!stacks->stack_b)
		ft_free_a_stack(stacks);
	i = 0;
	while (i < stacks->max_size)
		stacks->stack_a[i++] = -1;
	ft_fill_stack(stacks, numbers, n);
	return (stacks);
}
