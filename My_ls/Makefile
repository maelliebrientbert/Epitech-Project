##
## EPITECH PROJECT, 2022
## delivery
## File description:
## Makefile
##

CC	=	gcc
SRC =	my_ls.c \
		my_basic_ls.c	\
		my_l_flag.c
LIB_SRC	= lib/my/my_printf.c	\
		lib/my/my_putchar.c	\
		lib/my/my_putstr.c	\
		lib/my/my_put_nbr.c	\
		lib/my/my_strcmp.c
LIB_OBJ =	$(LIB_SRC:.c=.o)
OBJ	=	$(SRC:.c=.o)
CFLAGS =  -L . -lmy
NAME = my_ls
all: $(NAME)
lib: $(LIB_OBJ)
	ar rc libmy.a $(LIB_OBJ)
$(NAME): lib $(OBJ)
	gcc -o ${NAME} ${OBJ} $(CFLAGS)
clean:
	rm	-rf	$(OBJ)
	rm -rf $(LIB_OBJ)

fclean:
	rm	-f	$(NAME) libmy.a
re:	fclean	all
