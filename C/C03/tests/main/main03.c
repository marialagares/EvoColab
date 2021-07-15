#include <stdio.h>
#include <string.h>

char *ft_strncat(char *s1, char *s2, unsigned int n);

int main ()
{
	char *ret;
  	char key[13] = "apple";
  	char buffer1[]=" juice";
	char buffer2[]=" and stuff";
	char buffer3[]="";

	unsigned int n = 25;
	printf ("Test 03 int ft_strncat(char *s1, char *s2);  \n");
	printf ("strings are %s and %s \n", key, buffer1 );
	ret = ft_strncat (key,buffer1,n);
	printf ("Return is %s\n",ret );
	printf ("strings are %s: and %s \n", key, buffer2 );
	n = 5;
	ret = ft_strncat (key,buffer3,n );
	printf ("Return is %s\n",ret );
	printf ("strings are %s: and %s \n", key, buffer3 );
	n = 0;
	ret = ft_strncat (key,buffer3,n);
	printf ("Return is %s\n",ret );
		printf ("\n" );
}

