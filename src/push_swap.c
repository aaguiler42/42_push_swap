/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaguiler <aaguiler@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 10:16:01 by aaguiler          #+#    #+#             */
/*   Updated: 2022/06/05 16:53:38 by aaguiler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_stacks	*stacks;

	stacks = ft_inicialize_stacks(++argv, argc - 1);
	ft_push_b(stacks, 0);
	ft_print_struct(stacks);
	ft_push_a(stacks, 0);
	ft_print_struct(stacks);
	ft_free_stacks(stacks);
}
