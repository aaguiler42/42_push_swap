/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaguiler <aaguiler@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 10:16:01 by aaguiler          #+#    #+#             */
/*   Updated: 2022/06/02 19:34:45 by aaguiler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int	*stackA;
	int	*stackB;
	
	stackA = ft_calloc(argc, sizeof(int));
	if (!stackA)
		return (0);
	ft_check_and_fill(stackA, ++argv, argc - 1);
//	stackB = ft_calloc(argc, sizeof(int));
//	if (!stackB)
//		return (0);
	free (stackA);
//	free (stackB);
}
