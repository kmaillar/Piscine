/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaillar <kmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/26 14:35:52 by kmaillar          #+#    #+#             */
/*   Updated: 2015/10/26 14:38:12 by kmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int		i;
	int		*j;

	i = 0;
	if ((j = (int *)malloc(sizeof(int) * length)) == NULL)
		return (NULL);
	while (i < length)
	{
		j[i] = f(tab[i]);
		i++;
	}
	return (j);
}
