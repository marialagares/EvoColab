#include <stdio.h>
int	ft_iterative_power(int nb,int p);

int main()
{	
	int res;
	printf("C05 - ex02 tests\n");
	res = ft_iterative_power(0,0);
	printf("test 1 - pars:0, 0 result:%d\n",res);

	res = ft_iterative_power(4,0);
	printf("test 2 - pars:4,0 result:%d\n",res);

	res = ft_iterative_power(-4,1);
	printf("test 3 - pars:-4,1 result:%d\n",res);

	res = ft_iterative_power(-3,3);
	printf("test 3 - pars:-3,3 result:%d\n",res);

	res = ft_iterative_power(-228, 2);
	printf("test 4 - pars:-228,2 result:%d\n",res);
	res =0;
	res = ft_iterative_power(3,3 );
	printf("test 5 - pars:3,3 result: %d\n",res);
	res = ft_iterative_power(11, -3);
	printf("test 6 - pars:11,-3 result:%d\n",res);
printf("\n");
}