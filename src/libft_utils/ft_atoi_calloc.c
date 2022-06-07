/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_calloc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaguiler <aaguiler@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 18:50:01 by aaguiler          #+#    #+#             */
/*   Updated: 2022/06/07 18:25:36 by aaguiler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	ft_atoi(char *str, t_stacks *stacks)
{
	int		i;
	int		sign;
	long	finalint;

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
	finalint *= sign;
	if ((i > 10 && sign == 1) || (i > 11 && sign == -1)
		|| finalint > 2147483647 || finalint < -2147483648)
		ft_error(stacks);
	return (finalint);
}

void	*ft_calloc(int count, int size)
{
	char	*memory;
	int		i;

	i = 0;
	memory = malloc(count * size);
	if (!memory)
		return (0);
	while (i < count * size)
		memory[i++] = 0;
	return (memory);
}

int	ft_strncmp(const char *s1, const char *s2, int n)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0') && i < n - 1)
		i++;
	if (n == 0)
		return (0);
	else
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
