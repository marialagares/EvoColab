#!/bin/sh
norminette -R checkForbiddenSourrceHeadder ../ex00/ft_ft.c
norminette -R checkForbiddenSourrceHeadder ../ex01/ft_ultimate_ft.c
norminette -R checkForbiddenSourrceHeadder ../ex02/ft_swap.c
norminette -R checkForbiddenSourrceHeadder ../ex03/ft_div_mod.c
norminette -R checkForbiddenSourrceHeadder ../ex04/ft_ultimate_div_mod.c
norminette -R checkForbiddenSourrceHeadder ../ex05/ft_putstr.c
norminette -R checkForbiddenSourrceHeadder ../ex06/ft_strlen.c
norminette -R checkForbiddenSourrceHeadder ../ex07/ft_rev_int_tab.c
norminette -R checkForbiddenSourrceHeadder ../ex08/ft_sort_int_tab.c

rm *.out
gcc  -o ex00.out -Wall -Wextra -Werror ../ex00/ft_ft.c main/main00.c
gcc  -o ex01.out -Wall -Wextra -Werror ../ex01/ft_ultimate_ft.c main/main01.c
gcc  -o ex02.out -Wall -Wextra -Werror ../ex02/ft_swap.c main/main02.c
gcc  -o ex03.out -Wall -Wextra -Werror ../ex03/ft_div_mod.c main/main03.c
gcc  -o ex04.out -Wall -Wextra -Werror ../ex04/ft_ultimate_div_mod.c main/main04.c
gcc  -o ex05.out -Wall -Wextra -Werror ../ex05/ft_putstr.c main/main05.c
gcc  -o ex06.out -Wall -Wextra -Werror ../ex06/ft_strlen.c main/main06.c
gcc  -o ex07.out -Wall -Wextra -Werror ../ex07/ft_rev_int_tab.c main/main07.c
gcc  -o ex08.out -Wall -Wextra -Werror ../ex08/ft_sort_int_tab.c main/main08.c

./ex00.out
./ex01.out
./ex02.out
./ex03.out
./ex04.out
./ex05.out
./ex06.out
./ex07.out
./ex08.out


