#!/bin/sh
norminette -R checkForbiddenSourrceHeadder ../ex00/ft_strcmp.c
norminette -R checkForbiddenSourrceHeadder ../ex01/ft_strncmp.c
norminette -R checkForbiddenSourrceHeadder ../ex02/ft_strcat.c
norminette -R checkForbiddenSourrceHeadder ../ex03/ft_strncat.c
norminette -R checkForbiddenSourrceHeadder ../ex04/ft_strstr.c
norminette -R checkForbiddenSourrceHeadder ../ex05/ft_strlcat.c

rm *.out
gcc  -o ex00.out -Wall -Wextra -Werror ../ex00/ft_strcmp.c main/main00.c
gcc  -o ex01.out -Wall -Wextra -Werror ../ex01/ft_strncmp.c main/main01.c
gcc  -o ex02.out -Wall -Wextra -Werror ../ex02/ft_strcat.c main/main02.c
gcc  -o ex03.out -Wall -Wextra -Werror ../ex03/ft_strncat.c main/main03.c
gcc  -o ex04.out -Wall -Wextra -Werror ../ex04/ft_strstr.c main/main04.c
gcc  -o ex05.out -Wall -Wextra -Werror ../ex05/ft_strlcat.c main/main05.c
./ex00.out
./ex01.out
./ex02.out
./ex03.out
./ex04.out
./ex05.out
