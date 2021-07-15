#include <stdio.h>
int	ft_recursive_factorial(int nb);

int main()
{	
	int res;
	printf("C05 - ex01 tests\n");
	res = ft_recursive_factorial(0);
	printf("test 1 - passed:0 result:%d\n",res);

	res = ft_recursive_factorial(4);
	printf("test 2 - passed:4 result:%d\n",res);

	res = ft_recursive_factorial(6);
	printf("test 3 - passed:6 result:%d\n",res);

	res = ft_recursive_factorial(-228);
	printf("test 4 - passed:-228 result:%d\n",res);
	res =0;
	res = ft_recursive_factorial(20);
	printf("test 5 - passed:20 result:overflow %d\n",res);
	res = ft_recursive_factorial(11);
	printf("test 6 - passed:11 result:%d\n",res);
printf("\n");
}