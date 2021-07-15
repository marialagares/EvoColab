#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *s1, char *s2, unsigned int n);

int main ()
{
	unsigned int ret;
  	char key[35] = "apple";
  	char buffer1[]=" juice";
	char buffer2[]="ce";
	char buffer3[]=" blabla";

	unsigned int n = 7;
	printf ("Test 05 int ft_strncat(char *s1, char *s2);  \n");
	printf ("strings are %s and %s \n", key, buffer1 );
	ret = ft_strlcat (key,buffer1,n);
	printf ("Return is %d\n",ret );
	printf ("strings are %s: and %s \n", key, buffer2 );
	n = 2;
	ret = ft_strlcat (key,buffer3,n );
	printf ("Return is %d\n",ret );
	printf ("strings are %s: and %s \n", key, buffer3 );
	n = 0;
	ret = ft_strlcat (key,buffer3,n);
	printf ("Return is %d\n",ret );
		printf ("\n" );
	printf ("strings are %s: and %s \n", key, buffer3 );
	n = 7;
	ret = ft_strlcat (key,buffer3,n);
	printf ("Return is %d\n",ret );
		printf ("\n" );
}
