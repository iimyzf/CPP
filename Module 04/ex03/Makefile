# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/26 12:46:14 by yagnaou           #+#    #+#              #
#    Updated: 2023/02/27 22:38:40 by yagnaou          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	AMateria

FLAGS		=	-Wall -Werror -Wextra

CPPFLAGS	=	-std=c++98

SRCS		=	main.cpp AMateria.cpp Character.cpp Ice.cpp Cure.cpp MateriaSource.cpp

OBJS		=	${SRCS:.cpp:.o}

all			:	${NAME}

${NAME}		:	${SRCS}
				c++ ${FLAGS} ${CPPFLAGS} ${SRCS} -o ${NAME}

clean		:
				rm -rf ${OBJS}

fclean		:	clean
				rm -rf ${NAME}

re			:	fclean all