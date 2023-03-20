# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/07 21:26:34 by yagnaou           #+#    #+#              #
#    Updated: 2023/03/09 11:17:05 by yagnaou          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	mutantstack

FLAGS		=	-Wall -Werror -Wextra

CPPFLAGS	=	-std=c++98

SRCS		=	main.cpp

OBJS		=	${SRCS:.cpp=.o}

all			:	${NAME}

${NAME}		:	${SRCS}
				c++ ${FLAGS} ${CPPFLAGS} ${SRCS} -o ${NAME}

clean		:
				rm -rf ${OBJS}

fclean		:	clean
				rm -rf ${NAME}

re			:	fclean	all