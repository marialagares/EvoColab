/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   translator.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlagares <mlagares@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 09:52:42 by mlagares          #+#    #+#             */
/*   Updated: 2021/07/15 10:19:05 by mlagares         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

struct dict
{
		char *dic_num;
		char *word_num;
		struct dict *next;
};

struct dict *entry ;
struct dict *aux1;
struct dict *aux2;

char nums[41][40] = {"zero","one","two","three", "four","five","six","seven", 
					"eight","nine", "ten","eleven","twelve","thirteen","fourteen",
					"fifteen","sixteen","seventeen","eighteen","nineteen",
					"twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety", 
					"hundred", "thousand","million","billion","trillion","quadrillion",
					"quintillion","sixtillion","septillion","octillion","nonillion","decillion",  "undecillion"};
char words[41][40]= {"zero","one","two","three", "four","five","six","seven", "eight","nine", "ten",
 "eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen", 
 "twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety", "hundred", 
 "thousand","million","billion","trillion","quadrillion","quintillion","sixtillion",
 "septillion","octillion","nonillion","decillion",	"undecillion"};


int ft_breakup(char *num_str,char **triads);

void ft_print_offset(int elem_pos)
{
	struct dict *aux;
	int pos;

	pos=0;
	aux =entry;
	while (pos < elem_pos)
	{
		aux = aux->next;
		pos++;
	}
	printf (" %s ", aux->word_num);
}

void	ft_print_units(char c)
{
	ft_print_offset(c -48);
}

void	ft_print_teens(char c)
{
	ft_print_offset(c - 48 + 10);
}
void	ft_print_hundred()
{
	ft_print_offset(28);
}
void	ft_print_tens(char c)
{
	ft_print_offset(c - 48 + 18);
}

void	ft_print_group_word(int n)
{
	if (n > 0)
		ft_print_offset(n - 1 +28);
}

void	ft_print_and()
{
	printf (" and ");
}

void	ft_process_triad(int group_num,char *triad)
{
	int something;

	something =0;
	if (triad[0] > '0')
	{
		ft_print_units(triad[0]);
		ft_print_hundred();
		if (group_num == 1)
		ft_print_and();
		something =1;
	}
	if( triad[1] != '0') 
	{
		if( triad[1] ==	'1')
		{ 
			ft_print_teens(triad[2]);
			something = 1;
		}
		else 
		{
			ft_print_tens(triad[1]);	
			ft_print_units(triad[2]);	
			something = 1;
		}		
	}
	if (something &&  group_num != 1)
	{
		ft_print_group_word(group_num);
	}
}


void ft_translate(char *num_str)
{
	int	num_groups;
    char *triads[4]= {"000","000","456", "702"};
	int counter;
	struct dict *aux;


//	num_groups = ft_breakup(num_str, triads);

counter = 0;
num_groups =4;

while(num_groups > 0 )
	{
		ft_process_triad(num_groups, triads[counter]);
		num_groups--;
		counter++;
	}

	aux = entry;
	aux = aux->next;
}

void ft_build_list(void)
{
	struct dict *aux;
	int iter =0;
	entry =  malloc(sizeof(struct dict));
	aux = entry;
	while (iter < 40){
		aux->dic_num = nums[iter];
		aux->word_num = words[iter];
		if (iter + 1 < 40)
			aux->next = malloc(sizeof(struct dict));
		aux = aux->next;
		iter++;
	}
	aux = NULL;
}
