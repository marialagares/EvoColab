#include <stdio.h>
int	ft_sqrt(int nb);

int main()
{	
	int res;
	printf("C05 - ex05 tests\n");
	res = ft_sqrt(0);
	printf("test 1 - index:0 result:%d\n",res);

	res = ft_sqrt(1);
	printf("test 2 - index:1 result:%d\n",res);

	res = ft_sqrt(-4);
	printf("test 3 - index:-4 result:%d\n",res);

	res = ft_sqrt(4);
	printf("test 4 - index:4 result:%d\n",res);
	res =0;
	res = ft_sqrt(16);
	printf("test 5 - index:16 result: %d\n",res);
	res = ft_sqrt(5);
	printf("test 6 - index:5 result:%d\n",res);
	res = ft_sqrt(8);
	printf("test 7 - index:8 result:%d\n",res);
res = ft_sqrt(11);
	printf("test 6 - index:11 result:%d\n",res);
printf("\n");
}