CFLAGS = -Wall -Werror -Wextra
INCLUDE_PATH = include/
SRC = $(wildcard src/*.c)
OBJ = $(patsubst %.c, %.o, $(SRC))
NAME = rush-02

$(NAME): $(OBJ)
	cc $(CFLAGS) -o $@ $^

%.o: %.c
	cc $(CFLAGS) -c $< -o $@ -I$(INCLUDE_PATH)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
