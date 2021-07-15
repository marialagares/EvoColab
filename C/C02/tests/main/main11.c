#include <unistd.h>
#include <stdio.h>
void	ft_putstr_non_printable(char *str);

int	main(void)
{
	printf("TEST ex11 ft_putstr_non_printable\n");
	
	char src1[] ="hello Bworld%cz";
	char src2[] ="HHel\n234a\rs&.";
	src2[0]= -56;
	char src3[] =" Blard\ta";
	src3[0]=30;
	char src4[] ="2345\b world2";
	char src5[] ="  ";
	src5[0] =127;
	src5[1] =0;
	
	ft_putstr_non_printable(src1);
	write (1, "\n", 1);
	ft_putstr_non_printable(src2);
	write (1, "\n", 1);
	ft_putstr_non_printable(src3);
	write (1, "\n", 1);
	ft_putstr_non_printable(src4);
	write (1, "\n", 1);
	ft_putstr_non_printable(src5);
		write (1, "\n\n", 1);
}
