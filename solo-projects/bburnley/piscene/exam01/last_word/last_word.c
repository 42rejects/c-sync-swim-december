/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 21:37:17 by exam              #+#    #+#             */
/*   Updated: 2016/11/04 21:57:40 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	last_word(char *str)
{
	int		len;
	int		pos;
	int		idx;

	len = 1;
	idx = 0;
	while (str[idx] != '\0')
		len++;
		idx++;
	idx = len - 1;
	while (idx >= 0)
	{
		if ((str[idx] == ' ') || (str[idx] == '\t') || (idx == 0))
		   pos = idx;
		idx--;
	}
	while (pos <= len)
	{
		write(1, &str[pos], 1);
		pos++;
	}
}

int		main(int argc, char **argv)
{
	char	nl;

	nl = '\n';
	if (argc != 2)
		;
	else
		last_word(argv[1]);
	write(1, &nl, 1);
	return (0);
}
