# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/13 22:42:18 by yagnaou           #+#    #+#              #
#    Updated: 2022/11/13 22:46:10 by yagnaou          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Account

FLAGS		=	-Wall -Werror -Wextra

CPPFLAGS	=	-std=c++98

SRCS		=	Account.cpp tests.cpp

OBJS		=	${SRCS=.cpp:.o}

all			:	${NAME}

${NAME}		:	${SRCS}
				c++ ${CPPFLAGS} ${FLAGS} ${SRCS} -o ${NAME}

clean		:
				rm -rf ${OBJS}

fclean		:	clean
				rm -rf ${NAME}

re			:	fclean all