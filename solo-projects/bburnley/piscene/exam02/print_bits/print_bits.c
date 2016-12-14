/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 19:21:08 by exam              #+#    #+#             */
/*   Updated: 2016/11/11 20:31:03 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_bits(unsigned char octet)
{
	char	res[8];
	int		i;
	int		pos;

	i = 6;
	pos = 1;
	while (octet > 1)
	{
		if (octet % 2 == 0)
			(res[i] = '0');
		else
			(res[i] = '1');
		octet /= 2;
		i--;
		pos++;
	}
	if (octet)
		res[7] = '1';
	else
		res[7] = '0';
	while (pos != 8)
	{
		ft_putchar('0');
		pos++;
	}
	i = 7;
	while (i > -1)
	{
		ft_putchar(res[i]);
		i--;
	}
}
