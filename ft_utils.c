/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaguiler <aaguiler@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 18:39:40 by aaguiler          #+#    #+#             */
/*   Updated: 2022/06/04 19:16:22 by aaguiler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_fill_array(t_stacks *stacks, char **numbers)
{
	int	i;
	int	j;

	i = 0;
	while (numbers[i])
	{
		j = 0;
		stacks->stack_a[i] = ft_atoi(numbers[i], stacks);
		while (j < i)
		{
			if (stacks->stack_a[j++] == stacks->stack_a[i])
				ft_error(stacks);
		}
		i++;
	}
}

void	ft_fill_stack(t_stacks *stacks, char **numbers, int n)
{
	char	**nums;

	if (n != 1)
		ft_fill_array(stacks, numbers);
	else
	{
		nums = ft_split(numbers[0], ' ');
		ft_fill_array(stacks, nums);
		free(nums);
	}
	//	if (ft_is_ordered(stacks);
	ft_print_array(stacks->stack_a);
}
