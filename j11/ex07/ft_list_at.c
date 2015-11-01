/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaillar <kmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/29 13:19:26 by kmaillar          #+#    #+#             */
/*   Updated: 2015/10/29 13:23:50 by kmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	if (begin_list == NULL)
		return (NULL);
	while (begin_list && --nbr)
		begin_list = begin_list->next;
	return ((nbr == 0) ? begin_list : NULL);
}
