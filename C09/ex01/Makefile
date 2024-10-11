CFLAGS = -Wall -Wextra -Werror
SRC = $(wildcard srcs/*.c)
INCLUDES = includes/
OBJ = $(patsubst %.c, %.o, $(SRC))
LIBRARY_NAME = libft.a
AFLAGS = -cr
NAME = test

$(LIBRARY_NAME): $(OBJ)
	ar $(AFLAGS) $@ srcs/*.o

$(NAME): $(OBJ)
	cc $(CFLAGS) -o $@ $^

%.o: %.c
	cc $(CFLAGS) -c $< -o $@ -I$(INCLUDES)

clean:
	rm -f $(OBJ) $(NAME)

fclean: clean
	rm -f $(LIBRARY_NAME)

all: $(LIBRARY_NAME)

re: fclean all
