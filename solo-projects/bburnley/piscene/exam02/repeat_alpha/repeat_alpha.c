/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 18:12:45 by exam              #+#    #+#             */
/*   Updated: 2016/11/11 18:36:58 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	repeat_alpha(char *str)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i])
	{
		if ((str[i] > 64) && (str[i] < 91))
			while (j < (str[i] % 64))
			{
				ft_putchar(str[i]);
				j++;
			}
		else if ((str[i] > 96) && (str[i] < 123))
			while (j < (str[i] % 96))
			{
				ft_putchar(str[i]);
				j++;
			}
		else
			ft_putchar(str[i]);
		j = 0;
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		repeat_alpha(argv[1]);
	ft_putchar(10);
	return (0);
}
