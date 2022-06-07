NAME	= push_sw
BNAME	= checker

SRCS	= src/push_swap.c src/ft_utils.c src/ft_trash.c src/ft_memory.c \
			src/libft_utils/ft_split.c src/libft_utils/ft_atoi_calloc.c \
			src/operations/ft_swap.c src/operations/ft_reverse_rotate.c \
			src/operations/ft_push.c src/operations/ft_rotate.c src/ft_order.c

BSRCS	= src/ft_utils.c src/ft_trash.c src/ft_memory.c \
			src/libft_utils/ft_split.c src/libft_utils/ft_atoi_calloc.c \
			src/operations/ft_swap.c src/operations/ft_reverse_rotate.c \
			src/operations/ft_push.c src/operations/ft_rotate.c src/ft_order.c \
			src/get_next_line/get_next_line.c src/get_next_line/get_next_line_utils.c \
			src/bonus/checker.c

OBJS	= ${SRCS:.c=.o}

BOBJS	= ${BSRCS:.c=.o}

CC		= gcc

INCLUDE = includes

CFLAGS	= -Wall -Wextra -Werror -I ${INCLUDE}

RM		= rm -f

all:		${NAME}

${NAME}:	${OBJS}
		${CC} ${OBJS} -o ${NAME}

clean:
		${RM} ${OBJS} ${BOBJS}

fclean:		clean
		${RM} ${NAME} ${BNAME}

bonus:		${BOBJS}
		${CC} ${BOBJS} -o ${BNAME}

re:		fclean all bonus

.PHONY: all, clean, fclean, re, bonus
