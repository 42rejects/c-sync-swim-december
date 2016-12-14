/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 19:37:41 by exam              #+#    #+#             */
/*   Updated: 2016/11/04 21:32:33 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	convert_binary(char *byte)
{
	int		res;
	int		idx;
	int		power;

	power = 2;
	res = 0;
	idx = 6;
	while (byte[idx])
	{
		if (byte[idx] == '0')
			res += power;
		else
			res += power - 1;
		power *= 2;
		idx--;
	}
	byte[7] == '1' ? res++ : res;
	return (res + '0');
}

int				convert_octet(unsigned char octet)
{
	int		val;

	val = 0;
	val += octet[2] % 8;
	val += (octet[1] % 8) * 8;
	val += (octet[0] % 8) * 64;
	return (val);
}

unsigned char	reverse_bits(unsigned char octet)
{
	char	byte[9];
	char	*bytepnt;
	int		idx;
	int		val;

	val = convert_octet(octet);
	idx = 6;
	while ((val != 2) || (val != 1))
	{
		val % 2 == 0 ? (byte[idx] = '0') : (byte[idx] = '1');
		val /= 2;
		idx--;
	}
	val == 1 ? (byte[7] = '1') : (byte[7] = '0');
	idx = 0;
	while (byte[idx])
	{
		byte[idx] == '1' ? (byte[idx] = '0') : (byte[idx] = '1');
		idx++;
	}
	bytepnt = byte;
	return (convert_binary(bytepnt));
}
