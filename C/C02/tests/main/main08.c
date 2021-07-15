#include <unistd.h>
#include <stdio.h>
char *ft_strlowcase(char *src);

int	main(void)
{
	printf("TEST ex08 ft_strlowcase\n");
	char c;
	c=127;
	
	char src1[] ="Hello %cWorld%cz";
	char src2[] ="HHel234as&.";
	
	char src3[] ="Blard\1";
	char src4[] ="2345\31world2";
	char src5[] ="";

	char *dest1, *dest2 , *dest3, *dest4, *dest5;

	dest1 = ft_strlowcase(src1);
	dest2 = ft_strlowcase(src2);
	dest3= ft_strlowcase(src3);
	dest4= ft_strlowcase(src4);
	dest5 = ft_strlowcase(src5);

	printf("Source=%s\n", src1);
	printf("Return=%s\n", dest1);
	printf("Source=%s\n", src2);
	printf("Return=%s\n", dest2);
	printf("Source=%s\n", src3);
	printf("Return=%s\n", dest3);
	printf("Source=%s\n", src4);
	printf("Return=%s\n", dest4);
	printf("Source=%s\n", src5);
	printf("Return=%s\n", dest5);
	printf("\n");
}
