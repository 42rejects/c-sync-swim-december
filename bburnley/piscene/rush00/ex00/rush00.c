/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostrik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/30 11:10:46 by akostrik          #+#    #+#             */
/*   Updated: 2016/10/30 19:24:39 by bburnley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	hor_line(int x, char c1, char c2, char ln)
{
	int flag;

	flag = (x > 1);
	ft_putchar(c1);
	x--;
	while (x-- > 1)
		ft_putchar(ln);
	if (flag)
	{
		ft_putchar(c2);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	char a;
	char h_ln;
	char v_ln;
	char fill;

	a = 'o';
	h_ln = '-';
	v_ln = '|';
	fill = ' ';
	if (y < 1 || x < 1)
		return ;
	hor_line(x, a, a, h_ln);
	while (--y > 1)
		hor_line(x, v_ln, v_ln, ' ');
	if (y == 1)
		hor_line(x, a, a, h_ln);
}
