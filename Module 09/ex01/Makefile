NAME		=	RPN

FLAGS		=	-Wall -Werror -Wextra -fsanitize=address -g3 

CPPFLAGS	=	-std=c++98

SRCS		=	main.cpp RPN.cpp

OBJS		=	${SRCS:.cpp=.o}

all			:	${NAME}

${NAME}		:	${SRCS}
				c++ ${FLAGS} ${CPPFLAGS} ${SRCS} -o ${NAME}

clean		:
				rm -rf ${OBJS}

fclean		:	clean
				rm -rf ${NAME}

re			:	fclean	all