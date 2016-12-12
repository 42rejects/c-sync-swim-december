/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bburnley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 08:22:05 by bburnley          #+#    #+#             */
/*   Updated: 2016/10/30 21:49:37 by bburnley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	end_line(int first_last, char side1, char side2, char filler)
{
	if (first_last == 1)
		ft_putchar(side1);
	else if (first_last == 2)
		ft_putchar(side2);
	else
		ft_putchar(filler);
}

void	print_line(int length, int border)
{
	int		i;

	i = 1;
	while (i <= length)
	{
		if (i == 1)
			end_line(border, 'A', 'A', 'B');
		else if (i == length)
			end_line(border, 'C', 'C', 'B');
		else
		{
			if (border)
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		if (i == length)
			ft_putchar(10);
		i++;
	}
	return ;
}

void	rush(int x, int y)
{
	int		i;

	i = 1;
	while (i <= y)
	{
		if (i == 1)
			print_line(x, 1);
		else if (i == y)
			print_line(x, 2);
		else
			print_line(x, 0);
		i++;
	}
	return ;
}
