/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 10:45:48 by exam              #+#    #+#             */
/*   Updated: 2016/11/18 11:09:39 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_first_word(char *str);

void	skip_whitespace(char *str, int *i);

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	if (argc == 2)
		print_first_word(argv[1]);
	ft_putchar(10);
	return (0);
}

void	print_first_word(char *str)
{
	int 	i;

	i = 0;
	skip_whitespace(str, &i);
	while ((str[i] != ' ') && (str[i] != '\t') && (str[i] != 0))
		ft_putchar(str[i++]);
}

void	skip_whitespace(char *str, int *i)
{
	while ((str[*i] == ' ') || (str[*i] == '\t'))
		(*i)++;
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
