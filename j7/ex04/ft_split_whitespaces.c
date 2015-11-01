/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaillar <kmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/22 14:16:23 by kmaillar          #+#    #+#             */
/*   Updated: 2015/10/27 10:46:57 by kmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_nb_words(char *str)
{
	int		i;
	int		s;
	int		c;

	i = 0;
	s = 0;
	c = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		while (str[i] != '\t' && str[i] != ' ' && str[i] != '\n' && str[i])
		{
			i++;
			s = 1;
		}
		if (str[i] == '\t' || str[i] == ' ' || str[i] == '\n' || str[i] == '\0')
			{
				c += (s == 1) ? 1 : 0;
				i++;
			}
	}
	return (c);
}

int		ft_ln_w(char *str, int i)
{
	int		c;

	c = 0;
	while (str[i] != '\t' && str[i] != ' ' && str[i] != '\n' && str[i])
	{
		c++;
		i++;
	}
	return (c);
}

char	**ft_split_whitespaces(char *str)
{
	char	**res;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	if ((res = malloc(sizeof(char*) * (ft_nb_words(str) + 1))) == NULL)
		return (NULL);
	while (str[i])
	{
		while ((str[i] == '\t' || str[i] == ' ' || str[i] == '\n') && str[i])
			i++;
		if (str[i])
		{
			k = 0;
			if ((res[j] = malloc(sizeof(char) * ft_ln_w(str, i) + 1)) == NULL)
				return (NULL);
			while (str[i] != '\t' && str[i] != ' ' && str[i] != '\n' && str[i])
				res[j][k++] = str[i++];
			res[j++][k] = '\0';
		}
	}
	res[j] = NULL;
	return (res);
}
		
