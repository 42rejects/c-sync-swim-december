/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bburnley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 11:34:48 by bburnley          #+#    #+#             */
/*   Updated: 2016/11/10 23:07:11 by bburnley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

void	ft_display_file(char *filename)
{
	int		file;
	char	buffer[1024];
	int		bufferlength;

	file = open(filename, O_RDONLY);
	while ((bufferlength = read(file, buffer, 1024)) > 0)
		write(1, buffer, bufferlength);
	close(file);
}
