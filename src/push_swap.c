/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaguiler <aaguiler@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 10:16:01 by aaguiler          #+#    #+#             */
/*   Updated: 2022/06/07 17:35:09 by aaguiler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stacks	*stacks;

	stacks = ft_inicialize_stacks(++argv, argc - 1);
	if (ft_is_ordered(stacks) == 0)
		ft_order(stacks);
	ft_free_stacks(stacks);
}
