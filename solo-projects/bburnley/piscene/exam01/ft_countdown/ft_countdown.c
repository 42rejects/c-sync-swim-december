/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 18:06:21 by exam              #+#    #+#             */
/*   Updated: 2016/11/04 18:16:57 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_countdown(void)
{
	char	counter;
	char	nl;

	nl = '\n';
	counter = '9';
	while (counter >= '0')
	{
		write(1, &counter, 1);
		counter--;
	}
	write(1, &nl, 1);
}

int		main(void)
{
	ft_countdown();
	return (0);
}
