NAME=rush-02
FLAGS=-Wall -Wextra -Werror
FILES=*.c
all: $(NAME)
RM=/bin/rm -f
rush-02:
    gcc $(FLAGS) -o $(NAME) $(FILES)
clean:
    $(RM) *.o
fclean: clean
         $(RM) $(NAME)
