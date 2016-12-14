/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 20:36:02 by exam              #+#    #+#             */
/*   Updated: 2016/11/11 21:23:40 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		print_last_word(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	i--;
	while (i > 0)
	{
		if ((str[i - 1] == ' ') || (str[i - 1] == '\t'))
		{
			if ((str[i] != ' ') && (str[i] != '\t'))
				return (i);
		}
		i--;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		word_i;

	word_i = 0;
	if (argc != 2)
	{
		ft_putchar(10);
		return (0);
	}
	else
		word_i = print_last_word(argv[1]);
	if (word_i != 0) 
	{
		while(argv[1][word_i])
		{
			if ((argv[1][word_i] != ' ') && (argv[1][word_i] != '\t'))
				ft_putchar(argv[1][word_i]);
			word_i++;
		}
	}
	ft_putchar(10);
	return (0);
}
