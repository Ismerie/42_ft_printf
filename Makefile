NAME = libftprintf.a

HDR = ft_printf.h

SRCS = ft_printf.c ft_putnbr.c

OBJS = ${SRCS:.c=.o}

LIBFT_AR = ./libft/libft.a 

CC = gcc

CFLAGS = -Wall -Wextra -Werror

%.o: %.c ${HDR} ${LIBFT_AR}
	${CC} ${CFLAGS} -c $< -o $@ 

all: libft ${NAME}

${NAME}: ${OBJS}
	cp ${LIBFT_AR} ${NAME}
	ar rcs ${NAME} ${OBJS}

libft:
	make -C libft

clean:
	rm -f ${OBJS}
	make clean -C libft

fclean: clean
	rm -f ${NAME}
	make fclean -C libft
:
re: fclean all

.PHONY: all libft clean fclean re
