# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: orlgarci <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/09/23 18:21:48 by orlgarci          #+#    #+#              #
#    Updated: 2026/09/23 18:21:52 by orlgarci         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Werror -Wextra
NAME = libft.a
SRCDIR = srcs
INCDIR = includes
AR = ar rcs

SRCS	=	${addprefix $(SRCDIR)/, ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c}

OBJS	= ${SRCS:.c=.o}

all:	${NAME}

${NAME}:	${OBJS}
		${AR} ${NAME} ${OBJS}

.c.o:
		${CC} ${CFLAGS} -I ${INCDIR} -c $< -o $@

clean:
		rm -f ${OBJS}

fclean:	clean
		rm -f ${NAME}

re:		fclean all

.PHONY:	all clean fclean re
