#include <stdio.h>

char	*ft_strdup(char *src);

int main()
{
printf("Output string:%s\n", ft_strdup("test   test"));
printf("Output string:%s\n", ft_strdup(""));
printf("Output string:%s\n", ft_strdup("\n\tblabla 123"));
printf("Output string:%s\n", ft_strdup("blabla 123  \n"));

}
