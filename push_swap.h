#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>

//Libft functions
int	ft_atoi(char *str);
char	**ft_split(char const *s, char c);
int	ft_count_words(char const *s, char c);

//Error function
void ft_error(void);

//Memory functions
void	*ft_calloc(size_t count, size_t size);

//Array functions
void	ft_check_and_fill(int *stack, char **numbers, int len);

#endif
