/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaillar <kmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/29 14:01:38 by kmaillar          #+#    #+#             */
/*   Updated: 2015/10/29 14:05:30 by kmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	ft_list_last(t_list *begin_list)
{
	if (begin_list == NULL)
		return (NULL);
	while (begin_list->next)
		begin_list = begin_list->next;
	return (begin_list);
}

void	ft_list_marge(t_list **begin_list1, t_list *begin_list2)
{
	ft_list_last(*begin_list1)->next = begin_list2;
}
