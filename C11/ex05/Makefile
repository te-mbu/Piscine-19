SRCDIR		= ./srcs/

SRCNAME		= calculate.c ft_atoi.c ft_putchar.c ft_putnbr.c ft_putstr.c main.c

SRCS		= ${addprefix ${SRCDIR}, ${SRCNAME}}

INCDIR		=./includes/

OBJS		= ${SRCS:.c=.o}

NAME		= do-op

CC			= gcc

RM			= rm -f

CFLAGS		= -Wall -Wextra -Werror


.c.o:
			${CC} ${CFLAGS} -I ${INCDIR} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${CC} ${CFLAGS} -o ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		clean fclean re all
