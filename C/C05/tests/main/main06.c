#include <stdio.h>
int	ft_is_prime(int nb);

int main()
{	
	int res;
	printf("C05 - ex06 tests\n");
	res = ft_is_prime(0);
	printf("test 1 - index:0 result:%d\n",res);

	res = ft_is_prime(1);
	printf("test 2 - index:1 result:%d\n",res);

	res = ft_is_prime(-4);
	printf("test 3 - index:-4 result:%d\n",res);

	res = ft_is_prime(4);
	printf("test 4 - index:4 result:%d\n",res);
	res =0;
	res = ft_is_prime(16);
	printf("test 5 - index:16 result: %d\n",res);
	res = ft_is_prime(5);
	printf("test 6 - index:5 result:%d\n",res);
	res = ft_is_prime(8);
	printf("test 7 - index:8 result:%d\n",res);
res = ft_is_prime(11);
	printf("test 8 - index:11 result:%d\n",res);
	res = ft_is_prime(2);
	printf("test 9 - index:2 result:%d\n",res);
		res = ft_is_prime(3);
	printf("test 10 - index:3 result:%d\n",res);


printf("\n");
}