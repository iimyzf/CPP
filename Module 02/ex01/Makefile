# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/12 14:33:03 by yagnaou           #+#    #+#              #
#    Updated: 2022/12/12 14:33:05 by yagnaou          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	a.out

FLAGS		=	-Wall -Werror -Wextra

CPPFLAGS	=	-std=c++98

SRCS		=	Fixed.cpp main.cpp

OBJS		=	${SRCS=.cpp:.o}

all			:	${NAME}

${NAME}		:	${SRCS}
				c++ ${CPPFLAGS} ${FLAGS} ${SRCS} -o ${NAME}

clean		:
				rm -rf ${OBJS}

fclean		:	clean
				rm -rf ${NAME}

re			:	fclean all