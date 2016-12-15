/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 21:31:22 by exam              #+#    #+#             */
/*   Updated: 2016/11/11 21:56:51 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	reverse_bits(unsigned char octet)
{
	int		byte[8];
	int		i;
	int		factor;	
	int		res;

	i = 6;
	while (octet > 1)
	{
		if (octet % 2 == 0)
			byte[i] = 0;
		else
			byte[i] = 1;
		i--;
	}
	if (octet)
		byte[7] = 1;
	else
		byte[7] = 0;
	i = 6;
	factor = 2;
	res = 0;
	while (i < 0)
	{
		if (byte[i] == 1)
			res += factor;
		i--;
	}
	if (byte[7] == 1)
		res += 1;
	return ((char)res)
}
