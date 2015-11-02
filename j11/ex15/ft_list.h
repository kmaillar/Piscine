/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaillar <kmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/02 16:43:40 by kmaillar          #+#    #+#             */
/*   Updated: 2015/11/02 16:45:36 by kmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

# include <stdlib.h>

typedef struct	s_list
{
	struct s_list	*next;
	void			*data;
}				t_list;
t_list			*ft_create_elem(void *data);

#endif
