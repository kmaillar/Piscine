/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaillar <kmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/29 13:29:04 by kmaillar          #+#    #+#             */
/*   Updated: 2015/10/29 13:30:45 by kmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	int		i;
	t_list	*tmp;

	i = 0;
	tmp = begin_list;
	while (tmp)
	{
		(*f)(tmp->data);
		tmp = tmp->;
	}
}
