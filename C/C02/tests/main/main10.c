#include <unistd.h>
#include <stdio.h>
int	ft_strlcpy(char *src, char*, int n);

int	main(void)
{
	printf("TEST ex10 ft_strlcpy\n");
	char c;
	c=127;
	
	char src1[] ="hello %cworld%cz";
	char src2[] ="HHel234as&.";
	char src3[] =" Blard\1";
	char src4[] ="2345\31 world2";
	char src5[] ="";

	char dest1[30]="";
	char dest2[30]="";
	char dest3[30]="";
	char dest4[30]="";
	char dest5[30]="";
	
	unsigned int ret1, ret2, ret3, ret4, ret5;
	ret1 = ft_strlcpy(dest1,src1, 5);
	ret2 = ft_strlcpy(dest2, src2, 7);
	ret3 = ft_strlcpy( dest3,src3, 0);
	ret4 = ft_strlcpy(dest4,src4,  1);
	ret5 = ft_strlcpy(dest5,src5,7);

	printf("Source=%s n=%d\n", src1,5);
	printf("Dest=%s\n", dest1);
	printf("Ret:%d\n",ret1);
	printf("Source=%s n=%d\n", src2, 7);
	printf("Dest=%s\n", dest2);
	printf("Ret:%d\n",ret2);
	printf("Source=%s n=%d\n", src3, 0);
	printf("Dest=%s\n", dest3);
	printf("Ret:%d\n",ret3);
	printf("Source=%s n=%d\n", src4, 1);
	printf("Dest=%s\n", dest4);
	printf("Ret:%d\n",ret4);
	printf("Source=%s n=%d\n", src5, 7);
	printf("Dest=%s\n", dest5);
	printf("Ret:%d\n",ret5);
	printf("\n");
}
