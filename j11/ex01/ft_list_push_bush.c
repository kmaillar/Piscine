/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_bush.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaillar <kmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/29 12:41:26 by kmaillar          #+#    #+#             */
/*   Updated: 2015/10/29 12:43:51 by kmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *tmp;
	t_list *nav;

	if (*begin_list == NULL)
		return ;
	nav = *begin_list;
	tmp = ft_create_elem(data);
	while (nav->next)
		nav = nav->next;
	nav->next = tmp;
}
