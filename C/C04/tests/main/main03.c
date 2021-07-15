#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_atoi(char *str);

int main ()
{
	int ret = 0;
  	char buffer1[]=" \njuice";
	char buffer2[]=" and \tstuff";
	char buffer3[]="";
	char buffer4[]=" + 12juice";
	char buffer5[]=" +--+-123and stuff";
	char buffer6[]="9876";
	char buffer7[]="---9876";
	char buffer8[]="  \n\n---9876";
	char buffer9[]=" \t+-+-9876";
	char buffer10[]=" \t+-+-123456776";

	
	printf ("Test ex03 int ft_atoi  \n");
	printf ("1 - atoi of %s \n", buffer1 );
	ret = ft_atoi(buffer1);
	printf ("1 - ret is %d \n", ret );
	printf ("1 - ret atoi is %d \n", atoi(buffer1) );

	printf ("2 - atoi of %s \n", buffer2 );
	ret = ft_atoi(buffer2);
	printf ("2 - ret is %d \n", ret );
		printf ("1 - ret atoi is %d \n", atoi(buffer2) );

printf ("3 - atoi of %s \n", buffer3 );
	ret = ft_atoi(buffer3);
	printf ("3 - ret is %d \n", ret );
		printf ("1 - ret atoi is %d \n", atoi(buffer3) );
 
 	printf ("4 - atoi of %s \n", buffer4 );
	ret = ft_atoi(buffer4);
	printf ("4 - ret is %d \n", ret );
		printf ("1 - ret atoi is %d \n", atoi(buffer4) );

printf ("5 - atoi of %s \n", buffer5 );
	ret = ft_atoi(buffer5);
	printf ("5 - ret is %d \n", ret );
		printf ("1 - ret atoi is %d \n", atoi(buffer5) );

printf ("6 - atoi of %s \n", buffer6 );
	ret = ft_atoi(buffer6);
	printf ("6 - ret is %d \n", ret );
		printf ("1 - ret atoi is %d \n", atoi(buffer6) );

printf ("7 - atoi of %s \n", buffer7 );
	ret = ft_atoi(buffer7);
	printf ("7 - ret is %d \n", ret );
		printf ("1 - ret atoi is %d \n", atoi(buffer7) );

	printf ("8 - atoi of %s \n", buffer8 );
	ret = ft_atoi(buffer8);
	printf ("8 - ret is %d \n", ret );
		printf ("1 - ret atoi is %d \n", atoi(buffer8) );

printf ("9 - atoi of %s \n", buffer9 );
	ret = ft_atoi(buffer9);
	printf ("9 - ret is %d \n", ret );
		printf ("1 - ret atoi is %d \n", atoi(buffer9) );

		printf ("10 - atoi of %s \n", buffer10 );
	ret = ft_atoi(buffer10);
	printf ("10 - ret is %d \n", ret );
		printf ("1 - ret atoi is %d \n", atoi(buffer10) );
}

