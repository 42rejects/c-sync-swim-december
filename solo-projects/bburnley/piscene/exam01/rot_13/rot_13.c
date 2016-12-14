/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 18:22:25 by exam              #+#    #+#             */
/*   Updated: 2016/11/04 19:32:00 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rot_13(char *str)
{
	int		idx;
	char	tmp;

	idx = 0;
	while (str[idx])
	{
		tmp = str[idx];
		if (((tmp > 64) && (tmp < 91)) || ((tmp > 96) && (tmp < 123)))
		{
			if (((tmp > 77) && (tmp < 91)) || ((tmp > 109) && (tmp < 123)))
				tmp -= 13;
			else
				tmp += 13;
		}
		write(1, &tmp, 1);
		idx++;
	}
}

int		main(int argc, char *argv[])
{
	char	nl;

	nl = '\n';
	if (argc != 2)
		;
	else
		rot_13(argv[1]);
	write(1, &nl, 1);
	return (0);
}
