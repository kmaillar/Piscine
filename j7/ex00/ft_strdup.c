/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaillar <kmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/22 13:03:07 by kmaillar          #+#    #+#             */
/*   Updated: 2015/10/28 00:47:29 by kmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *str)
{
	int		i;
	char	*new;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	if ((new = malloc(sizeof(*new) * (i + 1))) == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		new[i] = str[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
