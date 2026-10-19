# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: orlgarci <orlgarci@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/09/23 18:20:53 by orlgarci          #+#    #+#              #
#    Updated: 2026/09/23 18:23:27 by orlgarci         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables
NAME = ft_display_file
CC = cc
CFLAGS = -Wall -Werror -Wextra -g3
RM = rm -rf
AR = ar rcs

RESET	=	\033[0m
BLACK	=	\033[0;30m
RED	=	\033[1;31m
GREEN	=	\033[0;32m
YELLOW	=	\033[0;33m
BLUE	=	\033[0;34m
PURPLE	=	\033[0;35m
CYAN	=	\033[0;36m
WHITE	=	\033[0;37m

OK	=	✓
FAIL	=	✗
INFO	=	ⓘ


SRCS	=	main.c

OBJS	= ${SRCS:.c=.o}


all:	${NAME}

${NAME}: ${SRCS}
	@${CC} ${CFLAGS} -c ${SRCS}
	@${CC} -o ${NAME} ${OBJS}
	@echo "${GREEN}${NAME} properly created${RESET}"
clean:
	@rm -f ${OBJS}
	@echo "${YELLOW}all .o files are removed${RESET}"

fclean:	clean
	@rm -f ${NAME}
	@echo "${RED}${NAME} is deleted${RESET}"

re:		fclean all

.PHONY:	all clean fclean re
