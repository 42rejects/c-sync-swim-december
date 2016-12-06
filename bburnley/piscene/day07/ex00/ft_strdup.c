/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bburnley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 01:10:52 by bburnley          #+#    #+#             */
/*   Updated: 2016/11/03 16:13:50 by bburnley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src);

char	*ft_strdup(char *src)
{
	int		len;
	char	*res;

	len = 0;
	while (src[len])
		len++;
	res = (char*)malloc(sizeof(char*) * (len + 1));
	res = ft_strcpy(res, src);
	return (res);
}

char	*ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while ((dest[i] = src[i]))
		i++;
	return (dest);
}
