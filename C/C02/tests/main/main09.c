#include <unistd.h>
#include <stdio.h>
char *ft_strcapitalize(char *src);

int	main(void)
{
	printf("TEST ex09 ft_strcapitalize\n");
	char c;
	c=127;
	
	char orig1[] ="hello %cworld%cz";
	char orig2[] ="HHel  234as&.";
	char orig3[] =" Blard\1";
	char orig4[] ="2345\31 world2";
	char orig5[] ="";

	char src1[] ="hello %cworld%cz";
	char src2[] ="HHel234as&.";
	char src3[] =" Blard\1";
	char src4[] ="2345\31 world2";
	char src5[] ="";
	
	char *dest1, *dest2 , *dest3, *dest4, *dest5;
	
	dest1 = ft_strcapitalize(src1);
	dest2 = ft_strcapitalize(src2);
	dest3 = ft_strcapitalize(src3);
	dest4 = ft_strcapitalize(src4);
	dest5 = ft_strcapitalize(src5);

	printf("Source=%s\n", orig1);
	printf("Return=%s\n", dest1);
	printf("Source=%s\n", orig2);
	printf("Return=%s\n", dest2);
	printf("Source=%s\n", orig3);
	printf("Return=%s\n", dest3);
	printf("Source=%s\n", orig4);
	printf("Return=%s\n", dest4);
	printf("Source=%s\n", orig5);
	printf("Return=%s\n", dest5);
	printf("\n");
}
