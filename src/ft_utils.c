/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaguiler <aaguiler@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 18:39:40 by aaguiler          #+#    #+#             */
/*   Updated: 2022/06/05 12:05:44 by aaguiler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_is_ordered(t_stacks *stacks)
{
	int	i;

	i = 1;
	while (stacks->stack_a[i])
	{
		if (stacks->stack_a[i] < stacks->stack_a[i - 1])
			return (0);
		i++;
	}
	return (1);
}

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
	if (!ft_is_ordered(stacks))
		ft_print_array(stacks->stack_a);
}
