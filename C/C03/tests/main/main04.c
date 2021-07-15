#include <stdio.h>
#include <string.h>
char  *ft_strstr(char *s1, char *s2);

int main ()
{

  	char buffer1[] = "bad apple juice";
  	char buffer2[]=" juice";
	char buffer3[]=" app";
	char buffer4[]="test";
	char buffer5[]="";
	char *test;

	printf ("Test 04 int ft_strstr(char *s1, char *s2);  \n");
	printf ("strings are %s: and %s \n", buffer1, buffer2 );
	test= ft_strstr(buffer1,buffer2);
	printf ("return is  %s:  \n", test );

	printf ("strings are %s: and %s \n", buffer1, buffer3 );
	test= ft_strstr(buffer1,buffer3);
	printf ("return is  %s:  \n", test );

	printf ("strings are %s: and %s \n", buffer1, buffer4 );
	test= ft_strstr(buffer1,buffer4);
	printf ("return is  %s:  \n", test );
	printf ("\n" );


	printf ("strings are %s: and %s \n", buffer1, buffer5 );
	test= ft_strstr(buffer1,buffer5);
	printf ("return is  %s:  \n", test );
	printf ("\n" );
}