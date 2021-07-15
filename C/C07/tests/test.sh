#!/bin/sh
norminette -R checkForbiddenSourrceHeadder ../ex00/ft_strdup.c
#norminette -R checkForbiddenSourrceHeadder ../ex01/ft_recursive_factorial.c
#norminette -R checkForbiddenSourrceHeadder ../ex02/ft_iterative_power.c
#norminette -R checkForbiddenSourrceHeadder ../ex03/ft_recursive_power.c
#norminette -R checkForbiddenSourrceHeadder ../ex04/ft_fibonacci.c
#norminette -R checkForbiddenSourrceHeadder ../ex05/ft_sqrt.c
#norminette -R checkForbiddenSourrceHeadder ../ex06/ft_is_prime.c

rm *.out
gcc  -o ex00.out -Wall -Wextra -Werror ../ex00/ft_strdup.c main/main00.c
#gcc  -o ex01.out -Wall -Wextra -Werror ../ex01/ft_recursive_factorial.c main/main01.c
#gcc  -o ex02.out -Wall -Wextra -Werror ../ex02/ft_iterative_power.c main/main02.c
#gcc  -o ex03.out -Wall -Wextra -Werror ../ex03/ft_recursive_power.c main/main03.c
#gcc  -o ex04.out -Wall -Wextra -Werror ../ex04/ft_fibonacci.c main/main04.c
#gcc  -o ex05.out -Wall -Wextra -Werror ../ex05/ft_sqrt.c main/main05.c
#gcc  -o ex06.out -Wall -Wextra -Werror ../ex06/ft_is_prime.c main/main06.c


./ex00.out
#./ex01.out
#./ex02.out
#./ex03.out
#./ex04.out
#./ex05.out
#./ex06.out
