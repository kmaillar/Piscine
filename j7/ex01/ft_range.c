/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaillar <kmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/22 13:10:10 by kmaillar          #+#    #+#             */
/*   Updated: 2015/10/27 10:34:29 by kmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*tab;
	int		i;

	i = 0;
	if (min >= max)
		return (0);
	tab = (int*)malloc(sizeof(*tab) * (max - min));
	while (min < max)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
