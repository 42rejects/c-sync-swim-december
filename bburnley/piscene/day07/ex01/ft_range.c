/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bburnley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 13:45:18 by bburnley          #+#    #+#             */
/*   Updated: 2016/11/03 20:40:03 by bburnley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*str;
	int		i;
	int		*null;

	null = 0;
	if (min >= max)
		return (null);
	str = (int*)malloc(sizeof(int*) * ((max - min) + 1));
	i = 0;
	while (min < max)
	{
		str[i] = min++;
		i++;
	}
	return (str);
}
