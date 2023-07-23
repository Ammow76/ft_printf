/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr_u.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abuhot <abuhot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 15:13:26 by abuhot            #+#    #+#             */
/*   Updated: 2023/07/22 15:08:53 by abuhot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	nb_len_u(unsigned int nb)
{
	int	len;

	len = 0;
	if (nb == 0)
		return (1);
	while (nb != 0)
	{
		nb /= 10;
		len++;
	}
	return (len);
}

unsigned int	ft_print_nbr_u(unsigned int nbr)
{
	int	i;

	i = nb_len_u(nbr);
	if (nbr > 9)
	{
		ft_print_nbr(nbr / 10);
		ft_print_nbr(nbr % 10);
	}
	else
		ft_print_chr(nbr + '0');
	return (i);
}
