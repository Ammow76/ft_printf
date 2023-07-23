/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abuhot <abuhot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 14:29:51 by abuhot            #+#    #+#             */
/*   Updated: 2023/07/23 14:49:25 by abuhot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	nb_len_d(int nb)
{
	int	len;

	len = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		nb = -nb;
		len++;
	}
	while (nb != 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

int	ft_print_nbr(int nbr)
{
	int	i;
	int	num;

	num = nbr;
	i = nb_len_d(num);
	if (nbr == -2147483648)
		return (ft_print_str("-2147483648"));
	if (num < 0)
	{
		ft_print_chr('-');
		num = nbr * -1;
	}
	if (num > 9)
	{
		ft_print_nbr(num / 10);
		ft_print_nbr(num % 10);
	}
	else
		ft_print_chr(num + '0');
	return (i);
}
