LIB_NAME = libft.a
INCLUDES = include/
src = $(wildcard src/*.c)
OBJ = $(src:.c=.o) 
CFLAGS = -Wall -Wextra -Werror -I$(INCLUDES)

$(LIB_NAME): $(OBJ)
	@ar rcs $@ $^

%.o: %.c
	@cc $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(LIB_NAME)

fclean: clean
	rm -f $(LIB_NAME)

all: $(LIB_NAME)

re: fclean all

