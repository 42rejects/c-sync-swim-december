/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bburnley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 08:22:05 by bburnley          #+#    #+#             */
/*   Updated: 2016/10/30 21:18:00 by bburnley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	end_line(int top_bottom, char corner1, char corner2, char filler)
{
	if (top_bottom == 1)
		ft_putchar(corner1);
	else if (top_bottom == 2)
		ft_putchar(corner2);
	else
		ft_putchar(filler);
}

void	make_line(int length, int border)
{
	int		i;

	i = 1;
	while (i <= length)
	{
		if (i == 1)
			end_line(border, 'A', 'C', 'B');
		else if (i == length)
			end_line(border, 'C', 'A', 'B');
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
			make_line(x, 1);
		else if (i == y)
			make_line(x, 2);
		else
			make_line(x, 0);
		i++;
	}
	return ;
}
