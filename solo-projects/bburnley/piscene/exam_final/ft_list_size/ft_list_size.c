/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 16:20:36 by exam              #+#    #+#             */
/*   Updated: 2016/11/18 16:52:50 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int		self;
	
	self = 1;
	if (begin_list->next != NULL)
		return (self + (ft_list_size(begin_list->next)));
	else
		return (self);
}
