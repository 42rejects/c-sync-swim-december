/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bburnley <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 10:20:39 by bburnley          #+#    #+#             */
/*   Updated: 2016/11/11 23:17:00 by bburnley         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree		*btree_create_node(void *item)
{
	t_btree		*btree;

	btree = malloc(sizeof(t_btree));
	if (btree)
	{
		btree->right = 0;
		btree->left = 0;
		btree->item = item;
	}
	return (btree);
}
