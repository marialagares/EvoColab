#include <stdio.h>
#include <string.h>

int ft_strlen(char *s1);

int main ()
{
	int ret;
   	char buffer1[]="apple";
	char buffer2[]="juices";
	char buffer3[]="apples";
	char buffer4[]="";

	printf ("Test 00 - 1 int ft_strlen(char *buffer1);  \n");
	ret = ft_strlen (buffer1);
	printf ("string - %s length %d \n", buffer1,ret);

	
	printf ("2-   \n");
	ret = ft_strlen (buffer2);
		printf ("string - %s length %d \n", buffer2, ret );
	

	printf ("3-   \n");
	ret = ft_strlen (buffer3);
	printf ("string - %s length %d \n", buffer3, ret);
	
	

	printf ("4-  \n");
	ret = ft_strlen (buffer4);
	printf ("string - %s length %d \n", buffer4, ret);
	
		printf ("\n");
}