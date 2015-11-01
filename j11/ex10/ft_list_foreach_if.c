/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaillar <kmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/29 13:35:19 by kmaillar          #+#    #+#             */
/*   Updated: 2015/10/29 13:37:49 by kmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *), \
		void *data_ref, int (*cmp) ())
{
	int		i;
	t_list	*tmp;

	i = 0;
	tmp = begin_list;
	while (tmp)
	{
		if ((*cmp)(tmp->data, data_ref) == 0)
			(*f)(tmp->data);
		tmp = tmp->next;
	}
}
