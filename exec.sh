#! /usr/bin/env zsh

norminette -R CheckingForbiddenSourceHeader $1.c \
&& clang -Wall -Wextra -Werror -lbsd tests/test_$1.c libft.a && ./a.out