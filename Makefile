# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cfontain <cfontain@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/11 12:36:32 by cfontain          #+#    #+#              #
#    Updated: 2022/05/19 10:23:33 by cfontain         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS	= ft_printf.c ft_putnbrstr.c ft_putnbrhex.c

NAME	= libftprintf.a

HEADER		= ft_printf.h

OBJS	= ${SRCS:.c=.o}

CC		= gcc 

CFLAGS	= -Wall -Wextra -Werror

RM		= rm -f

all:		${NAME}

bonus		:  ${OBJS}
				ar rc ${NAME}  ${OBJS} 
				ranlib ${NAME}


${NAME}:	 ${HEADER} ${OBJS} 
			
			ar rc ${NAME} ${OBJS}

			ranlib ${NAME}
clean:
	${RM} ${OBJS} 

fclean:		clean
			${RM} ${NAME}

re:		fclean all

.PHONY:		all clean fclean re
