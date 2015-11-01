/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaillar <kmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/29 13:00:58 by kmaillar          #+#    #+#             */
/*   Updated: 2015/10/29 13:06:04 by kmaillar         ###   ########.fr       */
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

t_list *ft_list_push_params(int ac, char **av)
{
	t_list *tmp;

	tmp = ft_create_elem(av[--ac]);
	while (ac > 0)
		ft_list_push_back(&tmp, av[--ac]++);
	return (tmp);
}
