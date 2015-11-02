/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaillar <kmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/29 14:07:59 by kmaillar          #+#    #+#             */
/*   Updated: 2015/11/02 16:23:34 by kmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	swap(void **first, void **second)
{
	void	*tmp;

	tmp = *second;
	*second = *first;
	*first = tmp;
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	int		chang;
	t_list	*current;

	chqng = 1;
	while (chang)
	{
		chang = 0;
		current = *first;
		while (current->next)
		{
			if (cmp(current->data, current->next->data) > 0)
			{
				swap(&current->data, &current->next->data);
				chang = 1;
			}
			current = current->next;
		}
	}
}
