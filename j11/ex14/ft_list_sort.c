/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaillar <kmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/29 14:07:59 by kmaillar          #+#    #+#             */
/*   Updated: 2015/11/04 16:39:27 by kmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

static void	swap(t_list **first, t_list **second)
{
	void	*tmp;

	tmp = (*first)->data;
	(*first)->data = (*second)->data;
	(*second)->data = tmp;
}

void		ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*tmp;
	t_list	*tmp_bis;
	int		chang;

	chang = 1;
	if ((*begin_list)->next == NULL)
		return ;
	while (chang)
	{
		chang = 0;
		tmp = *begin_list;
		tmp_bis = tmp->next;
		while (tmp_bis)
		{
			if ((*cmp)(tmp->data, tmp_bis->data) > 0)
			{
				swap(&tmp, &tmp_bis);
				chang = 1;
			}
			tmp = tmp->next;
			tmp_bis = tmp->next;
		}
	}
}
