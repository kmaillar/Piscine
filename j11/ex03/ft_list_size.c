/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaillar <kmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/29 12:54:40 by kmaillar          #+#    #+#             */
/*   Updated: 2015/10/29 12:57:18 by kmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int		i;
	t_list	*nav;

	i = 0;
	if (begin_list == NULL)
		return (0);
	nav = begin_list;
	while (nav)
	{
		nav = nav->next;
		i++;
	}
	return (i);
}
