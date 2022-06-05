NAME	= push_swap

SRCS	= src/push_swap.c src/ft_utils.c src/ft_trash.c src/ft_memory.c \
			src/libft_utils/ft_split.c src/libft_utils/ft_atoi_calloc.c \
			src/operations/ft_swap.c

OBJS	= ${SRCS:.c=.o}

CC		= gcc

CFLAGS	= -Wall -Wextra -Werror

RM		= rm -f

all:		${NAME}

${NAME}:	${OBJS}
		${CC} ${OBJS} -o ${NAME}

clean:
		${RM} ${OBJS}

fclean:		clean
		${RM} ${NAME}

re:		fclean all

.PHONY: all, clean, fclean, re