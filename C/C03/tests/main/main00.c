#include <stdio.h>
#include <string.h>

int ft_strcmp(char *s1, char *s2);

int main ()
{
	int ret;
   	char buffer1[]="apple";
	char buffer2[]="juices";
	char buffer3[]="apples";
	char buffer4[]="ap";

	printf ("Test 00 - 1 int ft_strcmp(char *s1, char *s2);  \n");
	printf ("strings are %s and %s \n", buffer1, buffer2 );
	ret = ft_strcmp (buffer1,buffer2);
	printf ("Return is %d:\n",ret );
	
	printf ("Test 00 - 2" );
	printf ("strings are %s and %s \nf", buffer2, buffer1 );
	ret = ft_strcmp (buffer2,buffer1);
	printf ("Return is %d:\n",ret );


	printf ("Test 00 - 3" );
	printf ("strings are %s and %s \n", buffer3, buffer1 );
	ret = ft_strcmp (buffer3,buffer1);
	printf ("Return is %d:\n",ret );

	printf ("Test 00 - 4" );
	printf ("strings are %s and %s \n", buffer1, buffer4 );
	ret = ft_strcmp (buffer1,buffer4);
	printf ("Return is %d:\n",ret );

	printf ("Test 00 - 5" );
	printf ("strings are %s and %s \n", buffer1, buffer1 );
	ret = ft_strcmp (buffer1,buffer1);
	printf ("Return is %d:\n",ret );
	
		printf ("\n");
}