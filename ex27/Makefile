## File name ##
NAME = ft_display_file

## Define .c and .o files ##
SRC = ft_display_file.c

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