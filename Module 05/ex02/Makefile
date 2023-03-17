# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/28 10:39:38 by yagnaou           #+#    #+#              #
#    Updated: 2023/03/01 22:20:01 by yagnaou          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	a.out

FLAGS		=	-Wall -Werror -Wextra

CPPFLAGS	=	-std=c++98

SRCS		=	main.cpp Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp

OBJS		=	${SRCS:.cpp=.o}

all			:	${NAME}

${NAME}		:	${SRCS}
				c++ ${FLAGS} ${CPPFLAGS} ${SRCS} -o ${NAME}

clean		:
				rm -rf ${OBJS}

fclean		:	clean
				rm -rf ${NAME}

re			:	fclean	all