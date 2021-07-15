/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-02.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlagares <mlagares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/10 12:26:08 by mlagares          #+#    #+#             */
/*   Updated: 2021/07/11 20:57:51 by mlagares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>


struct dict
{
		char *dic_num;
		char *word_num;
		struct dict *next;
};


struct dict *entry;
int	ft_str_is_numeric(char *str);
int	ft_char_is_numeric (char c);
int	ft_is_space(char c);
int	ft_file_exists(char *file_name);
struct dict * ft_build_list(char *file_to_process);
void ft_translate(char *num_str, struct dict *start_entry);
int process_file(char *filename, struct dict *entry);

int	ft_process_valid_args(char **argv, int num_args, int pos)
{
	int	num_pos;
	char *file_to_process;
	struct dict *list;

	num_pos =0;
	file_to_process = NULL;

	//if the file exists generate the default list
	if (process_file("numbers.dict", entry))
	;
	//	list = ft_build_list("numbers.dict");
	else
	{
		write(1, "Error4\n", 6);
		return (0);
	}
	if (num_args == 2)
		num_pos = 1;
	else
		num_pos = 2;
	//here checkif there is a file to update defaullt and update list		
	// not working yet
	//list = ft_build_list(file_to_process);
	//file_to_process = argv[num_pos];
	
	while (argv[num_pos][pos] && ft_is_space(argv[num_pos][pos]))
		pos++;
	if (ft_str_is_numeric(&argv[num_pos][pos]))
	{
		ft_translate(&argv[num_pos][pos], entry);
	}
	else
	{
		write(1, "Error4\n", 6);
		return (0);
	}
	return (1);
}



int	main(int argc, char **argv)
{
	int	pos;
	int	num_pos;

	pos = 0;
	num_pos	= 0;

	
	if (argc > 3 || argc == 1)
	{
		write (1, "Error\n", 6);
			return (0);
	}
	else
	{
		if (!ft_process_valid_args(argv, argc, pos))
		{
			write (1, "Error\n", 6);
			return (0);
		}
		else
		{
			return (0);
		}
		
	}
}
