/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaillar <kmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/29 12:48:45 by kmaillar          #+#    #+#             */
/*   Updated: 2015/10/29 12:51:09 by kmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*tmp;

	if(*begin_list == NULL)
		return ;
	tmp = ft_create_elem(data);
	tmp->next = *begin_list;
	*begin_list = tmp;
}
