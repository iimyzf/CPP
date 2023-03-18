# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/02 18:37:26 by yagnaou           #+#    #+#              #
#    Updated: 2023/03/02 18:38:35 by yagnaou          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	convert

FLAGS		=	-Wall -Werror -Wextra

CPPFLAGS	=	-std=c++98

SRCS		=	main.cpp ScalarConverter.cpp

OBJS		=	${SRCS:.cpp=.o}

all			:	${NAME}

${NAME}		:	${SRCS}
				c++ ${FLAGS} ${CPPFLAGS} ${SRCS} -o ${NAME}

clean		:
				rm -rf ${OBJS}

fclean		:	clean
				rm -rf ${NAME}

re			:	fclean	all