/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaguiler <aaguiler@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 18:39:40 by aaguiler          #+#    #+#             */
/*   Updated: 2022/06/05 16:42:36 by aaguiler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_is_ordered(t_stacks *stacks)
{
	int	i;

	i = 1;
	while (i < stacks->size_a)
	{
		if (stacks->stack_a[i] < stacks->stack_a[i - 1])
			return (0);
		i++;
	}
	return (1);
}

void	ft_search_and_replace(int *stack_a, int *aux, int min, int i)
{
	int	j;

	j = 0;
	while (aux[j] != min)
		j++;
	stack_a[j] = i;
	aux[j] = 2147483647;
}

void	ft_transform_array(int *stack_a, int len, int *aux)
{
	int	min;
	int	i;
	int	j;

	i = 0;
	while (i < len)
	{
		min = 2147483647;
		j = 0;
		while (j < len)
		{
			if (aux[j] < min)
				min = aux[j];
			j++;
		}
		ft_search_and_replace(stack_a, aux, min, i);
		i++;
	}
}

void	ft_fill_array(t_stacks *stacks, char **numbers)
{
	int	i;
	int	j;
	int	*aux;

	aux = ft_calloc((stacks->max_size + 1), sizeof(int));
	if (!aux)
		ft_free_stacks(stacks);
	i = 0;
	while (numbers[i])
	{
		j = 0;
		aux[i] = ft_atoi(numbers[i], stacks);
		while (j < i)
		{
			if (aux[j++] == aux[i])
			{
				free (aux);
				ft_error(stacks);
			}
		}
		i++;
	}
	ft_transform_array(stacks->stack_a, stacks->max_size, aux);
	free(aux);
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
	if (ft_is_ordered(stacks) == 0)
		ft_order(stacks);
}
