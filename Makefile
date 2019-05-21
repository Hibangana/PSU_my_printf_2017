##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## my_printf
##

SRC	=	src/my_printf.c			\
		src/case_cap_s.c		\
		src/case_cap_c.c		\
		src/case_check.c		\
		src/my_putchar.c		\
		src/my_put_nbr_binary.c		\
		src/my_put_nbr.c		\
		src/my_put_nbr_unsigned.c	\
		src/my_putstr.c			\
		src/my_strlen.c			\
		src/put_hexa_cap.c		\
		src/put_hexa_for_long.c		\
		src/put_hexa_or_oct.c		\
		src/removespace.c		\
		src/testspacepresence.c

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

CFLAGS	=	-I./include

all: $(NAME)

$(NAME):$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -rf $(OBJ)	\
	rm *~

fclean: clean
	rm -rf $(NAME)	\
	rm *~		\
	rm *#		\
	rm *.a

re: fclean all	\

.PHONY: all clean fclean re
