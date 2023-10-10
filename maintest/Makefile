CC		=	cc
CFLAGS	=	-Wall -Werror -Wextra
NAME	=	-o libft.a
OBJECTS	=	libft.h main.o ft_*.o


all		: libft

libft	: ${OBJECTS}
	${CC} ${CFLAGS} ${NAME} ${OBJECTS}



main.o	: main.c libft.h
	${CC} ${CFLAGS} main.c
	
ft_*.o	: ft_*.c libft.h
	${CC} ${CFLAGS} ft_*.c



.PHONY	: clean
clean	:
	rm libft.a ${OBJECTS}