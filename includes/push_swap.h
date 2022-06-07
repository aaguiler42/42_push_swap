/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaguiler <aaguiler@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 18:41:38 by aaguiler          #+#    #+#             */
/*   Updated: 2022/06/07 17:00:09 by aaguiler         ###   ########.fr       */
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
void		*ft_calloc(int count, int size);
int			ft_strncmp(const char *s1, const char *s2, int n);

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

//Order functions
void		ft_order(t_stacks *stacks);

//Utils functions
int			ft_is_ordered(t_stacks *stacks);
void		ft_fill_array(t_stacks *stacks, char **numbers);
void		ft_fill_stack(t_stacks *stacks, char **numbers, int n);

//Memory functions
void		ft_free_stacks(t_stacks *stacks);
void		ft_error(t_stacks *stacks);
t_stacks	*ft_inicialize_stacks(char **numbers, int n);

//Trash functions
void		ft_print_struct(t_stacks *stacks);

#endif
