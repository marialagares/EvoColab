#include <stdio.h>

int	ft_fibonacci(int nb);

int main()
{	
	int res;
	printf("C05 - ex04 tests\n");
	res = ft_fibonacci(0);
	printf("test 1 - index:0 result:%d\n",res);

	res = ft_fibonacci(1);
	printf("test 2 - index:1 result:%d\n",res);

	res = ft_fibonacci(-4);
	printf("test 3 - index:-4 result:%d\n",res);

	res = ft_fibonacci(2);
	printf("test 4 - index:2 result:%d\n",res);
	res =0;
	res = ft_fibonacci(3);
	printf("test 5 - index:3 result: %d\n",res);
	res = ft_fibonacci(5);
	printf("test 6 - index:5 result:%d\n",res);
	res = ft_fibonacci(8);
	printf("test 6 - index:8 result:%d\n",res);
res = ft_fibonacci(11);
	printf("test 6 - index:11 result:%d\n",res);
printf("\n");
}