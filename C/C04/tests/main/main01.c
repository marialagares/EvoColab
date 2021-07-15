#include <stdio.h>
#include <string.h>

void ft_putstr(char *str);

int main ()
{
  	char buffer1[]="apple";
	char buffer2[]=" juice";
	char buffer3[]="";
	
	printf ("Test 01  - 1 int ft_putstr n);  \n");
	printf ("string is %s \n" , buffer1);
	ft_putstr (buffer1);
		printf ("\n");
	
	printf ("2- n);  \n");
	printf ("string is %s \n" , buffer2);
	ft_putstr (buffer2);
	printf ("\n");
	printf ("3-  \n");
	printf ("string is %s \n" , buffer3);
	ft_putstr (buffer3);
	printf ("\n");
	
}