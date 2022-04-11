# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bschwitz <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/05 16:33:14 by bschwitz          #+#    #+#              #
#    Updated: 2022/04/11 16:29:43 by bschwitz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= push_swap

SRCS		= main.c \
			  check_args.c \
			  list.c \
			  utils.c \
			  utils2.c \
			  index.c \
			  simple.c \
			  simple2.c \
			  radix.c \
			  moves/swap.c \
			  moves/push.c \
			  moves/rotate.c \
			  moves/reverse.c

OBJS		= ${SRCS:.c=.o}

CC			= gcc -Wall -Werror -Wextra

RM			= rm -rf

all:		${NAME}

${NAME}:	${OBJS}
			${MAKE} -C ./libft
			${CC} ./libft/libft.a ${OBJS} -o ${NAME}
			
clean:		
			${MAKE} -C ./libft fclean
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re
