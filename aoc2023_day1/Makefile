NAME = decode
CC = cc
SRC = src/main.c src/get_next_line.c src/get_next_line_utils.c
RM = rm -rf
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(SRC) -o $(NAME)

fclean:
	$(RM) $(OBJ) $(NAME)
