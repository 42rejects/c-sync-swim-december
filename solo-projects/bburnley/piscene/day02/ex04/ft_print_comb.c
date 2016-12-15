/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bburnley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 12:52:48 by bburnley          #+#    #+#             */
/*   Updated: 2016/10/27 22:19:11 by bburnley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_trip(char a, char b, char c);

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '1';
	c = '2';
	while (a <= '7')
	{
		while (b <= '8')
		{
			while (c <= '9')
			{
				ft_print_trip(a, b, c);
				c++;
			}
			c = b + 1;
			b++;
		}
		b = a + 1;
		a++;
	}
}

void	ft_print_trip(char a, char b, char c)
{
	if (a != b && b != c && c != a)
	{
		ft_putchar(a);
		ft_putchar(b);
		ft_putchar(c);
		if (!(a == '7' && b == '8' && c == '9'))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		else
			ft_putchar(10);
	}
}
