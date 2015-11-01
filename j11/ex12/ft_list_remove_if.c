/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaillar <kmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/29 13:55:37 by kmaillar          #+#    #+#             */
/*   Updated: 2015/10/29 14:00:01 by kmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref,int (*cmp)())
{
	t_list	*list_ptr;

	list_ptr = *begin_list;
	while (list_ptr)
	{
		if (!((*cmp)(list_ptr->data, data_ref)))
		{
			list_ptr->next = list_ptr->next->next;
			free(list_ptr);
		}
		list_ptr = list_ptr->next;
	}
}
