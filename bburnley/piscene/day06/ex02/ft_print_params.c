/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bburnley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 20:26:38 by bburnley          #+#    #+#             */
/*   Updated: 2016/11/02 23:30:00 by bburnley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str);

int		main(int argc, char **argv)
{
	int		i;

	i = 0;
	while (argv[1 + i])
	{
		ft_putstr(argv[i + 1]);
		ft_putchar(10);
		i++;
	}
	i = argc;
	return (0);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}
