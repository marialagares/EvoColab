#include <unistd.h>
#include <fcntl.h>

int	ft_char_is_numeric (char c)
{
	int	ret;

	ret = 0;
	if ((c >= '0' && c <= '9'))
		ret = 1;
	return (ret);
}

int	ft_str_is_numeric(char *str)
{
	int	pos;
	int	alpha;

	alpha = 0;
	pos = 0;
	if (str[pos] == '\0')
		return (1);
	while (str[pos] != '\0')
	{
		if (!ft_char_is_numeric(str[pos]))
			return (0);
		else
			alpha = 1;
		pos ++;
	}
	return (alpha);
}

int	ft_is_space(char c)
{
	if (c == ' ' || c == '\n' || \
		c == '\v' || c == '\f' || c == '\r' || c == '\t')
		return (1);
	else
		return (0);
}

int	ft_file_exists(char *file_name)
{	
	int	ret;

	ret = open(file_name, O_WRONLY);
	if (ret != -1)
		close(ret);
	return (ret);
}
