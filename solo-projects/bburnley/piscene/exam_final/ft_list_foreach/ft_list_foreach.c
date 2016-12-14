/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 16:20:36 by exam              #+#    #+#             */
/*   Updated: 2016/11/18 17:30:37 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	
	if (begin_list->next)
	{
		f(begin_list->data);
		ft_list_foreach(begin_list->next, f);
	}
	else
		f(begin_list->data);
}
