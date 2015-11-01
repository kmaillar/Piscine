/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaillar <kmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/29 13:51:24 by kmaillar          #+#    #+#             */
/*   Updated: 2015/10/29 13:53:40 by kmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	int		i;
	t_list	*tmp;

	i = 0;
	tmp = begin_list;
	while (tmp)
	{
		if ((*cmp)(tmp->data, data_ref) == 1)
			return (tmp);
		tmp = tmp->next;
	}
}
