# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/14 13:56:45 by yagnaou           #+#    #+#              #
#    Updated: 2023/02/23 18:48:41 by yagnaou          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	a.out

FLAGS		=	-Wall -Werror -Wextra

CPPFLAGS	=	-std=c++98

SRCS		=	Fixed.cpp main.cpp Point.cpp bsp.cpp

OBJS		=	${SRCS=.cpp:.o}

all			:	${NAME}

${NAME}		:	${SRCS}
				c++ ${CPPFLAGS} ${FLAGS} ${SRCS} -o ${NAME}

clean		:
				rm -rf ${OBJS}

fclean		:	clean
				rm -rf ${NAME}

re			:	fclean all