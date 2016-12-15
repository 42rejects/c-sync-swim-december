/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 20:08:21 by exam              #+#    #+#             */
/*   Updated: 2016/10/28 21:06:16 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_check_size(char str);

int		ft_converter(int size, char str);

int		ft_powers(int digit);

int		ft_atoi(const char *str)
{
	int		result;
	int		size;

	size = ft_check_size(*str);
	result = ft_converter(size, *str);
	return result;
}

int		ft_check_size(char str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return i;
}

int		ft_converter(int size, char str)
{
	int		result;
	int		x;

	result = 0;
	x = 0;
	while (size > 0)
	{
		result += (str[x] * ft_powers(size));
		x++;
		size--;
	}
	return result;
}

int		powers(int digit)
{
	int		result;

	result = 1;
	while (digit > 1)
	{
		result *= 10;
		digit--;
	}
	return result;
}
