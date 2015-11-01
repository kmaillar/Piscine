/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaillar <kmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/22 13:20:18 by kmaillar          #+#    #+#             */
/*   Updated: 2015/10/27 13:23:06 by kmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		size;
	int		i;

	size = max - min;
	i = 0;
	if (size <= 0)
		return (-1);
	*range = (int*)malloc(sizeof(int) * size);
	while (i < size)
	{
		*range[i] = i;
		i++;
	}
	return (0);
}
