#include <stdio.h>
#include <string.h>

void ft_putnbr(int nb);

int main ()
{
	unsigned int nb1 =1;
	unsigned int nb2 =-2147483648;
	unsigned int nb3 =2147483647;
	unsigned int nb4 =0;
  
	printf ("Test 02 - 1 int ft_putnbr(int nb);  \n");
	printf ("number is:" );
	ft_putnbr (nb1);
	printf ("\n" );
	
	printf ("test 2- number: ");
	printf ("number is:" );
	ft_putnbr (nb2);
	printf ("\n" );
		
	printf ("test 3- number: ");
	printf ("number is:" );
	ft_putnbr (nb3);
	printf ("\n" );

	printf ("test 4- number: ");
	printf ("number is:" );
	ft_putnbr (nb4);
		printf ("\n" );
printf ("\n" );

}
