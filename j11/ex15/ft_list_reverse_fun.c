/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaillar <kmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 16:34:53 by kmaillar          #+#    #+#             */
/*   Updated: 2015/11/02 16:46:42 by kmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

static t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;
	t_list			*tmp;

	i = -1;
	tmp = begin_list;
	while (tmp && ++i < nbr)
		tmp = tmp->next;
	if (i == nbr)
		return (tmp);
	else
		return (NULL);
}

static int		ft_list_size(t_list *begin_list)
{
	int		i;
	t_list	*tmp;

	i = 0;
	tmp = begin_list;
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}

static void		swap(t_list **elem1, t_list **elem2)
{
	void	*tmp;

	tmp = (*elem1)->data;
	(*elem1)->data = (*elem2)->data;
	(*elem2)->data = tmp;
}

void			ft_list_reverse_fun(t_list *begin_list)
{
	unsigned int	list_size;
	unsigned int	i;
	unsigned int	j;
	t_list			*tmp1;
	t_list			*tmp2;

	list_size = ft_list_size(begin_list);
	i = 0;
	j = list_size - 1;
	while (i != j && i != list_size / 2)
	{
		tmp1 = ft_list_at(begin_list, i);
		tmp2 = ft_list_at(begin_list, j);
		swap(&tmp1, &tmp2);
		i++;
		j--;
	}
}
