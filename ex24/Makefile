## File name ##
NAME = libft.a

## Define .c and .o files ##
SRC = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c

OBJ = $(SRC:.c=.o)

## Set the compiler and compilation flags ##
CC = cc
CFLAGS = -Wall -Wextra -Werror

## Rule all ##
all: $(NAME)
$(NAME): $(OBJ) 
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

## Clean rule ##
clean:
	rm -f $(OBJ)

## Fclean rule ##
fclean: clean
	rm -f $(NAME)

## Re rule ##
re: fclean all

## Phone rule ##
.PHONY: all clean fclean re