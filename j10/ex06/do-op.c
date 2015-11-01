/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaillar <kmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/26 15:21:58 by kmaillar          #+#    #+#             */
/*   Updated: 2015/10/26 15:31:06 by kmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <my.h>
#include <s_opp.h>

int		check_params(int argc, char **argv)
{
	if (argc != 4)
		return (0);
	if(ft_nbr(argv[i]) == 0 || ft_nbr(argv[3]) == 0)
		return (0);
	return (1);
}

int		is_opp(char *str)
{
	int		i;

	i = 0;
	while (i < 5)
	{
		if (ft_strcmp(str, gl_opptab[i].opp) == 0)
			return (i);
		i += 1;
	}
	return (i);
}

void	do_op(char* num_1, char* opp, char* num_2)
{
	int		opp_int;

	opp_ind = is_opp(opp);
	gl_opptab[opp_ind].fct(ft_nbr(num_1), ft_nbr(num_2));
	ft_putchar('\n');
}

int		main(int argc, char** argv)
{
	if(!check_params(argc, argv))
	{
		putline("0");
		return (0);
	}
	do_op(argv[i], argv[2], argv[3]);
	return (0);
}
