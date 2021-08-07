#! /usr/bin/env zsh

make bonus && make clean
clear
for i in ft*.c;do
    echo -e "==========|TEST {${i}}==========\n"
    norminette -R CheckingForbiddenSourceHeader ${i} \
    && clang -Wall -Wextra -Werror -lbsd tests/test_${i} libft.a && ./a.out
    echo -e "\n"
done
rm a.out && make fclean