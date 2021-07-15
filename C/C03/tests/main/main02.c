#include <stdio.h>
#include <string.h>

char *ft_strcat(char *s1, char *s2);

int main ()
{
	char *ret;
  	char key[13] = "apple";
  	char buffer1[]=" juice";
	char buffer2[]=" and stuff";
	char buffer3[]="";

	printf ("Test 02 int ft_strcat(char *s1, char *s2);  \n");
	printf ("strings are %s and %s \n", key, buffer1 );
	ret = ft_strcat (key,buffer1);
	printf ("Return is %s\n",ret );
	printf ("strings are %s: and %s \n", key, buffer2 );
	ret = ft_strcat (key,buffer2);
	printf ("Return is %s\n",ret );
	printf ("strings are %s: and %s \n", key, buffer3 );
	ret = ft_strcat (key,buffer3);
	printf ("Return is %s:\n",ret );
		printf ("\n" );
}
