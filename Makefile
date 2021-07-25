NAME = libft.a
SOURCE_FILES = ft_isalpha.c \
               ft_isdigit.c
HEADER_DIR = .
OBJECT_FILES = $(SOURCE_FILES:.c=.o)
CC =clang 
FLAGS = -Wall -Wextra -Werror


.DEFAULT_GOAL := all

all: $(NAME)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@ -I $(HEADER_DIR)

$(NAME): $(OBJECT_FILES)
	ar cr $@ $(OBJECT_FILES)

clean:
	rm -f $(OBJECT_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

