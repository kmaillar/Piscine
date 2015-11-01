/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaillar <kmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/29 15:03:29 by kmaillar          #+#    #+#             */
/*   Updated: 2015/10/29 15:06:48 by kmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int		btree_level_count(t_btree *root)
{
	int		l;
	int		r;

	if (root == NULL)
		return (0);
	l = btree_level_count(root->left);
	r = btree_level_count(root->right);
	if (l > r)
		return (l + 1);
	else
		return (r + 1);
}
