#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


struct dict
{
		char *dic_num;
		char *word_num;
		struct dict *next;
};

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int line_counter(char *str)
{
	int counter;
	int i;

	counter = 0;
	i = 0;
	while (i < 691)
	{
		if (str[i] == '\n')
			counter++;
		i++;
	}
	return (counter);
}

int line_to_line(char *str, struct dict * entry)
{
	int		i;
	int		j;
	int		k;
	int		m;
	int		l;
	int		p;
	char	num[100];
	char	description[100];

	i = 0;
	j = 0;
	k = 0;
	m = 0;
	struct dict * aux;
	int iter =0;
	
	entry =  malloc(sizeof(struct dict));
	aux = entry;
	printf("In line to line");
	while (str[k] != '\0')
	{
		k++;
	}
	while (str[m] != ':')
	{
		m++;
	}
	while (str[i] != ':')
	{
		num[j] = str[i];
		
		i++;
		j++;
	}
	aux->word_num = num;
	write(1,aux->word_num, 4);
	if (i == m)
		num[i] = '\0';
	j = 0;
	l = m + 2; 
	p = 0;
	while (l <= k)
	{
		description[p] = str[l];

		aux->dic_num = &description[p];
		write (1,aux->dic_num,7);
		
		if (l + 1 < 40)
			aux->next = malloc(sizeof(struct dict));
			aux = aux->next;
			write(1,aux->next, 4);	

		p++;
		l++;
	}
	aux = NULL;
	if (l == k)
		description[p] = '\0'; 
		p = 0;
	return k;
}

/*int line_to_line(char *str)
{
	if (str[0] == '1' && str[1] == '6')
		printf("%s\n", str);
}*/

void line_scanner(int total_lineas, char *str, struct dict * entry)
{
	int 	i;
	int 	j;
	int 	k;
	int 	m;
	char	nueva_linea[699];

	i = 0;
	j = 0;
	k = 0;
	while (i <= total_lineas)
	{
		while (str[j] != '\n' && str[j] != '\0')
		{
			nueva_linea[k] = str[j];
			k++;
			j++;
		}
		nueva_linea[k] = '\0';
		line_to_line(nueva_linea, entry);
		k = 0;
		j++;
		i++;
	}
}

void line_to_line_search(char *search, char *str, struct dict *entry)
{
	int		i;
	int		j;
	int		k;
	int		m;
	char	num[100];
	char	result[100];

	i = 0;
	j = 0;
	k = 0;
	m = 0;
	while (search[k] != '\0')
	{
		k++;
	}
	while (search[i] != '\0')
	{
		num[j] = search[i];
		i++;
		j++;
	}
	if (i == m)
		num[i] = '\0';
	j = 0;
}

int process_file(char *filename, struct dict *entry)
{
	int 	fd;
	int 	total_lineas;
	int 	i;
	char	bytesChar;
	char	buf2;
	char	search[] = "100000000";
	int		nr_bytes;
	fd = open(filename, O_RDONLY);
	nr_bytes = 0;
		while (read(fd, &buf2, 1))
		{
			nr_bytes++;
		}
	if (fd == -1)
	{
		write(1,"Error\n",6);
	}
	else
	{
		char 	buf[nr_bytes];

		fd = open("filename", O_RDONLY);
		read(fd, buf, nr_bytes);
		close(fd);
		if (nr_bytes == 0)
		{
			write(1,"Error\n",6);
		}
		else
		{
			total_lineas = line_counter(buf);
			line_scanner(total_lineas, buf, entry);
			line_to_line_search(search, buf,entry);
		}
	}
	return (1);
}
