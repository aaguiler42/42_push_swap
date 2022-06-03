#include "push_swap.h"

int	ft_isspace(char *str)
{
	int	i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	return (i);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	int		finalint;
	char	*str2;

	str2 = (char *)str;
	i = ft_isspace(str2);
	sign = 1;
	if (str2[i] == '-')
	{
		sign *= -1;
		i++;
	}
	else if (str2[i] == '+')
		i++;
	finalint = 0;
	while (str2[i] >= '0' && str2[i] <= '9')
		finalint = finalint * 10 + (str2[i++] - '0');
	finalint *= sign;
	if (sign > 0 && finalint < 0)
		return (-1);
	if (sign < 0 && finalint > 0)
		return (0);
	return (finalint);
}

void	*ft_calloc(size_t count, size_t size)
{
	char	*memory;
	size_t	i;
	i = 0;
	memory = malloc(count * size);
	if (memory == NULL)
		return (0);
	while (i < count * size)
	{
		memory[i] = 0;
		i++;
	}
	return (memory);
}
