/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_calloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaguiler <aaguiler@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 18:50:01 by aaguiler          #+#    #+#             */
/*   Updated: 2022/06/05 11:52:56 by aaguiler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	ft_atoi(char *str, t_stacks *stacks)
{
	int	i;
	int	sign;
	int	finalint;

	i = 0;
	sign = 1;
	if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	finalint = 0;
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			finalint = finalint * 10 + (str[i] - '0');
		else
			ft_error(stacks);
		i++;
	}
	if ((sign > 0 && finalint * sign < 0) || (sign < 0 && finalint * sign > 0))
		ft_error(stacks);
	return (finalint * sign);
}

void	*ft_calloc(size_t count, size_t size)
{
	char	*memory;
	size_t	i;

	i = 0;
	memory = malloc(count * size);
	if (!memory)
		return (0);
	while (i < count * size)
	{
		memory[i] = 0;
		i++;
	}
	return (memory);
}