/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 18:40:06 by exam              #+#    #+#             */
/*   Updated: 2016/10/28 18:55:58 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(void)
{
	char	a;
	char	b;
	char	nl;
	int		i;

	a = 'a';
	b = 'A';
	i = 0;
	while (i < 26)
	{
		if (i % 2 == 0)
			write(1, &a, 1);
		else
			write(1, &b, 1);
		i++;
		a++;
		b++;
	}
	nl = 10;
	write(1, &nl, 1);
	return (0);
}
