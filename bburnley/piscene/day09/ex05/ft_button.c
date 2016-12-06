/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_button.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bburnley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 11:30:40 by bburnley          #+#    #+#             */
/*   Updated: 2016/11/04 14:09:10 by bburnley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_button(int i, int j, int k)
{
	if ((i == j) || (j == k) || (i == k))
	{
		if (i == j)
			return (i);
		if (j == k)
			return (j);
		else
			return (k);
	}
	if (i > k)
	{
		if ((j > k) && (i > j))
			return (j);
		else if (k > j)
			return (k);
		else
			return (i);
	}
	else if ((i < k) && (i > j))
		return (i);
	else
		return (j);
}
