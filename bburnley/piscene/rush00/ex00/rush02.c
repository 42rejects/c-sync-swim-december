/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bburnley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 08:22:05 by bburnley          #+#    #+#             */
/*   Updated: 2016/10/30 21:10:04 by bburnley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_line(int length, int border)
{
	int		i;

	i = 1;
	while (i <= length)
	{
		if ((i == 1) || (i == length))
		{
			if (border == 1)
				ft_putchar('A');
			else if (border == 2)
				ft_putchar('C');
			else
				ft_putchar('B');
		}
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
