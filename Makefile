# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edpaulin <edpaulin@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/07 16:04:57 by edpaulin          #+#    #+#              #
#    Updated: 2021/08/08 16:41:51 by edpaulin         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			=	libft.a

SRC				=	ft_isalpha.c \
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
					ft_strrchr.c \
					ft_strchr.c \
					ft_strncmp.c \
					ft_memchr.c \
					ft_memcmp.c \
					ft_strnstr.c \
					ft_atoi.c \
					ft_calloc.c \
					ft_strdup.c \
					ft_substr.c \
					ft_strjoin.c \
					ft_strtrim.c \
					ft_split.c \
					ft_itoa.c \
					ft_strmapi.c \
					ft_striteri.c \
					ft_putchar_fd.c \
					ft_putstr_fd.c \
					ft_putendl_fd.c \
					ft_putnbr_fd.c
SRC_BONUS		=	ft_lstnew.c \
					ft_lstadd_front.c \
					ft_lstsize.c \
					ft_lstlast.c \
					ft_lstadd_back.c \
					ft_lstdelone.c \
					ft_lstclear.c \
					ft_lstiter.c \
					ft_lstmap.c
OBJ				=	$(SRC:.c=.o)
OBJ_BONUS		=	$(SRC_BONUS:.c=.o)
	
HEADER_DIR		=	.
	
CC				=	clang
CFLAGS			=	-Wall -Wextra -Werror

.DEFAULT_GOAL	=	all

all:		$(NAME)

bonus:	$(NAME) $(OBJ_BONUS)
	ar cr $(NAME) $(OBJ) $(OBJ_BONUS)

%.o:		%.c
	$(CC) $(CFLAGS) -c $< -o $@ -I $(HEADER_DIR)

$(NAME):	$(OBJ)
	ar cr $(NAME) $(OBJ)

clean:
	rm -f $(OBJ) $(OBJ_BONUS)

fclean:		clean
	rm -f $(NAME)

re:			fclean all

rebonus:	fclean bonus