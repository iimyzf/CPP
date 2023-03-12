# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/08 18:01:29 by yagnaou           #+#    #+#              #
#    Updated: 2022/12/08 18:01:54 by yagnaou          ###   ########.fr        #
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