#include "push_swap.h"

#include <stdio.h>

void	ft_error(void)
{
	printf("Error");
	exit(0);
}

void	ft_print_array(int *stack)
{
	int	i;

	i = 0;
	while (stack[i])
		printf("%d\n", stack[i++]);
}

void	ft_fill_array(int *stack, char **numbers, int len)
{
	int	i;

	i = 0;
	while (numbers[i])
	{
		stack[i] = ft_atoi(numbers[i]);
		i++;
	}
}

void	ft_check_and_fill(int *stack, char **numbers, int len)
{
	char	**nums;

	if (len == 1)
	{
		nums = ft_split(numbers[0], ' ');
		ft_fill_array(stack, nums, ft_count_words(numbers[0], '0'));
	}
	else
		ft_fill_array(stack, numbers, len);
	ft_print_array(stack);
}
