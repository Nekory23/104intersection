##
## EPITECH PROJECT, 2019
## 104intersection
## File description:
## Makefile
##

NAME	=	104intersection

SRC	=	src/main.c			\
		src/create_coords.c		\
		src/create_eq.c			\
		src/discriminant.c		\
		src/compute_solutions.c		\
		src/compute_intersections.c	\
		src/error_handling.c		\
		src/display.c			\
		src/help_display.c

OBJ	=	$(SRC:.c=.o)

CFLAGS  =       -W -Wextra -Wall

CPPFLAGS=	-I./include/

LDFLAGS	=	-lm

all	:	$(OBJ)
		gcc $(CFLAGS) -o $(NAME) $(SRC) $(CPPFLAGS) $(LDFLAGS)

clean	:
		rm -f $(OBJ)

fclean	:	clean
		rm -f $(NAME)

re	:	fclean all

.PHONY	:	all clean fclean re
