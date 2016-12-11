/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bburnley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 13:05:30 by bburnley          #+#    #+#             */
/*   Updated: 2016/11/04 14:04:33 by bburnley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void			conjecture(unsigned int base, int *pointer);

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	int		count;
	int		*pnt;

	count = -1;
	pnt = &count;
	conjecture(base, pnt);
	return (count);
}

void			conjecture(unsigned int base, int *pointer)
{
	*pointer = *pointer + 1;
	if (base == 1)
		return ;
	else if ((base % 2) == 0)
		conjecture((base / 2), pointer);
	else
		conjecture(((3 * base) + 1), pointer);
}
