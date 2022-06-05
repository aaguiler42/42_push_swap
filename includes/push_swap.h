/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaguiler <aaguiler@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 18:41:38 by aaguiler          #+#    #+#             */
/*   Updated: 2022/06/05 15:01:21 by aaguiler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>

//Struct
typedef struct s_stacks
{
	int		*stack_a;
	int		*stack_b;
	int		max_size;
	int		size_a;
	int		size_b;
}			t_stacks;

//Libft functions
int			ft_atoi(char *str, t_stacks *stacks);
char		**ft_split(char const *s, char c);
int			ft_count_words(char const *s, char c);
void		*ft_calloc(size_t count, size_t size);

//Operations functions
void		ft_swap_a(t_stacks *stacks, int print);
void		ft_swap_b(t_stacks *stacks, int print);
void		ft_swap_both(t_stacks *stacks, int print);
void		ft_push_a(t_stacks *stacks, int print);
void		ft_push_b(t_stacks *stacks, int print);
void		ft_push(int *stack, int stack_len, int n);
void		ft_rotate_a(t_stacks *stack, int print);
void		ft_rotate_b(t_stacks *stack, int print);
void		ft_rotate_both(t_stacks *stacks, int print);
void		ft_reverse_rotate_a(t_stacks *stack, int print);
void		ft_reverse_rotate_b(t_stacks *stack, int print);
void		ft_reverse_rotate_both(t_stacks *stacks, int print);

//Utils functions
int			ft_is_ordered(t_stacks *stacks);
void		ft_fill_array(t_stacks *stacks, char **numbers);
void		ft_fill_stack(t_stacks *stacks, char **numbers, int n);

//Memory functions
void		ft_free_stacks(t_stacks *stacks);
void		ft_error(t_stacks *stacks);
t_stacks	*ft_inicialize_stacks(char **numbers, int n);

//Trash functions
void		ft_print_array(int *stack);

#endif
