/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bburnley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 11:14:40 by bburnley          #+#    #+#             */
/*   Updated: 2016/11/09 17:42:34 by bburnley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list		*ft_create_elem(void *data)
{
	t_list *tmp;

	tmp = (t_list*)malloc(sizeof(t_list));
	if (tmp)
	{
		tmp->next = NULL;
		tmp->data = data;
	}
	return (tmp);
}
