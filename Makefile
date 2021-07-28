NAME = libft.a
SOURCE_FILES = ft_isalpha.c \
               ft_isdigit.c \
               ft_isalnum.c \
               ft_isascii.c \
               ft_isprint.c \
               ft_strlen.c \
               ft_memset.c \
               ft_bzero.c \
               ft_memcpy.c \
               ft_memmove.c \
               ft_strlcpy.c \
               ft_strlcat.c \
               ft_toupper.c \
               ft_tolower.c \
               ft_strchr.c \
               ft_strrchr.c \
               ft_strncmp.c \
               ft_memchr.c \
               ft_memcmp.c \
               ft_strnstr.c \
               ft_atoi.c \
               ft_calloc.c
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

