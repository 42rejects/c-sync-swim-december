/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 18:42:18 by exam              #+#    #+#             */
/*   Updated: 2016/11/11 19:16:32 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int		res;
	int		i;
	int		sign;

	sign = 1;
	res = 0;
	i = 0;
	while (str[i])
	{
		if ((str[i] == '\n') || (str[i] == '\t') || (str[i] == ' ') || \
				(str[i] == '\v') || (str[i] == '\r') || (str[i] == '\f'))
			;
		else if (str[i] == '-')
			sign = -1;	
		else if ((str[i] > 47) && (str[i] < 58))
		{
			res *= 10;
			res += str[i] - '0';
		}
		else
			return (res * sign);
		i++;
	}
	return (res * sign);
}
