# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/16 01:36:14 by yagnaou           #+#    #+#              #
#    Updated: 2022/12/16 01:36:14 by yagnaou          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	main

CFLAGS		=	-Wall -Werror -Wextra

CPPFLAGS	=	-std=c++98

SRCS		=	main.cpp

OBJS		=	${SRCS=.cpp:.o}

all			:	${NAME}

${NAME}		:	${SRCS}
				c++	${CFLAGS} ${CPPFLAGS} ${SRCS} -o ${NAME}

clean		:
				rm -rf ${OBJS}

fclean		:	clean
				rm -rf ${NAME}

re			:	fclean all