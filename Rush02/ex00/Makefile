SRCDIR		= ./srcs/

SRCNAME		= between_strings.c						\
			  dico_setup.c							\
			  fill_strings.c						\
			  ft_check_str.c						\
			  ft_putchar.c							\
			  ft_putstr.c							\
		      ft_split.c							\
			  ft_strlen.c							\
			  main.c								\
			  write_numbers.c						\
			  write_three_per_three.c

SRCS		= ${addprefix ${SRCDIR}, ${SRCNAME}}

INCDIR		=./includes/

OBJS		= ${SRCS:.c=.o}

NAME		= rush-02

CC			= gcc

RM			= rm -f

CFLAGS		= -Wall -Wextra -Werror


.c.o:
			${CC} ${CFLAGS} -I ${INCDIR} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${CC} -o ${NAME} ${OBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		clean fclean re all
