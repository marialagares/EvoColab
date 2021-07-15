#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main ()
{
	int ret;
  	char buffer1[]="bapple";
	char buffer2[]="juice";
	char buffer3[]="arbol";

	unsigned int n;
	n = 0;
	printf ("Test 01  - 1 int ft_strncmp(char *s1, char *s2, unsigned int n);  \n");
	printf ("strings are %s: and %s \nn=%d " , buffer1, buffer2 , n);
	ret = ft_strncmp (buffer1,buffer2,n);
	printf ("Return is %d:\n",ret );
	n = 2;
	printf ("Test 01 - 2  \n");
	printf ("strings are %s: and %s \nn=%d " , buffer1, buffer2 , n);
	ret = ft_strncmp (buffer1,buffer2,n);
	printf ("Return is %d:\n",ret );
	n = 6;
	printf ("Test 01 - 3   \n");
	printf ("strings are %s: and %s \nn=%d " , buffer1, buffer3 , n);
	ret = ft_strncmp (buffer1,buffer3,n);
	printf ("Return is %d:\n",ret );

		printf ("\n" );
}