/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 16:57:04 by exam              #+#    #+#             */
/*   Updated: 2016/11/18 17:16:14 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

void	ft_putchar(char c);

int		main(int argc, char **argv)
{	
	(void)argv;
	ft_putnbr(argc - 1);
	ft_putchar(10);
	return (0);
}

void	ft_putnbr(int nb)
{
	if (nb > 9)
	{
	   ft_putnbr(nb / 10);
	   ft_putchar((nb % 10) + 48);
	}
	else
 		ft_putchar(nb + 48);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
