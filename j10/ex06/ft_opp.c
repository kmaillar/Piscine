/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_opp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmaillar <kmaillar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/10/26 15:11:35 by kmaillar          #+#    #+#             */
/*   Updated: 2015/10/26 15:21:44 by kmaillar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft.h>
#include <s_opp.h>
#include <ft_opp.h>

void	ft_add(int a, int b)
{
	ft_putnbr(a + b);
}

void	ft_sub(int a, int b)
{
	ft_putnbr(a - b);
}

void	ft_mul(int a, int b)
{
	ft_putnbr(a * b);
}

void	ft_div(int a, int b)
{
	if(b != 0)
		ft_putnbr(a / b);
	else
		ft_putstr("Stop : division by zero");
}

void	ft_mod(int a, int b)
{
	if(b != 0)
		ft_putnbr(a % b);
	else
		ft_putstr("Stop : modulo by zero")
}

void	ft_util(int a, int b)
{
	int		i;

	i = 0;
	ft_putstr("error : only [ ");
	while (i < 5)
	{
		ft_putstr(gl_opptab[i].opp);
		ft_putchar(' ');
		i = i + 1;
	}
	ft_putstr("] are supported");
}
