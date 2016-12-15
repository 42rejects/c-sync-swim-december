/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 10:04:03 by exam              #+#    #+#             */
/*   Updated: 2016/11/18 10:21:42 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int		i;

	i = 0;
	if (argc > 1)
		ft_putstr(argv[1]);
	ft_putchar(10);
	return (0);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while(str[i])
		ft_putchar(str[i++]);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
