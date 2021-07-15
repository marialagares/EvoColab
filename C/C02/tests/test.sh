#!/bin/sh
norminette -R checkForbiddenSourrceHeadder ../ex00/ft_strcpy.c
norminette -R checkForbiddenSourrceHeadder ../ex01/ft_strncpy.c
norminette -R checkForbiddenSourrceHeadder ../ex02/ft_str_is_alpha.c
norminette -R checkForbiddenSourrceHeadder ../ex03/ft_str_is_numeric.c
norminette -R checkForbiddenSourrceHeadder ../ex04/ft_str_is_lowercase.c
norminette -R checkForbiddenSourrceHeadder ../ex05/ft_str_is_uppercase.c
norminette -R checkForbiddenSourrceHeadder ../ex06/ft_str_is_printable.c
norminette -R checkForbiddenSourrceHeadder ../ex07/ft_strupcase.c
norminette -R checkForbiddenSourrceHeadder ../ex08/ft_strlowcase.c
norminette -R checkForbiddenSourrceHeadder ../ex09/ft_strcapitalize.c
norminette -R checkForbiddenSourrceHeadder ../ex10/ft_strlcpy.c
norminette -R checkForbiddenSourrceHeadder ../ex11/ft_putstr_non_printable.c
#norminette -R checkForbiddenSourrceHeadder ../ex12/ft_print_memory.c
echo "../ex12/ft_print_memory.c not tested"

rm *.out
gcc  -o ex00.out -Wall -Wextra -Werror ../ex00/ft_strcpy.c main/main00.c
gcc  -o ex01.out -Wall -Wextra -Werror ../ex01/ft_strncpy.c main/main01.c
gcc  -o ex02.out -Wall -Wextra -Werror ../ex02/ft_str_is_alpha.c main/main02.c
gcc  -o ex03.out -Wall -Wextra -Werror ../ex03/ft_str_is_numeric.c main/main03.c
gcc  -o ex04.out -Wall -Wextra -Werror ../ex04/ft_str_is_lowercase.c main/main04.c
gcc  -o ex05.out -Wall -Wextra -Werror ../ex05/ft_str_is_uppercase.c main/main05.c
gcc  -o ex06.out -Wall -Wextra -Werror ../ex06/ft_str_is_printable.c main/main06.c
gcc  -o ex07.out -Wall -Wextra -Werror ../ex07/ft_strupcase.c main/main07.c
gcc  -o ex08.out -Wall -Wextra -Werror ../ex08/ft_strlowcase.c main/main08.c
gcc  -o ex09.out -Wall -Wextra -Werror ../ex09/ft_strcapitalize.c main/main09.c
gcc  -o ex10.out -Wall -Wextra -Werror ../ex10/ft_strlcpy.c main/main10.c
gcc  -o ex11.out -Wall -Wextra -Werror ../ex11/ft_putstr_non_printable.c main/main11.c
#gcc  -o ex12.out -Wall -Wextra -Werror ../ex12/ft_print_memory.c main/main12.c
./ex00.out
./ex01.out
./ex02.out
./ex03.out
./ex04.out
./ex05.out
./ex06.out
./ex07.out
./ex08.out
./ex09.out
./ex10.out
./ex11.out
#./ex12.out
