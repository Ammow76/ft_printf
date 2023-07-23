/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abuhot <abuhot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 17:54:11 by abuhot            #+#    #+#             */
/*   Updated: 2023/07/22 18:23:54 by abuhot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_memory(unsigned long long int nbr, char *base)
{
	if (nbr >= ft_strlen(base))
	{
		ft_print_memory(nbr / ft_strlen(base), base);
		nbr %= ft_strlen(base);
	}
	ft_print_chr(base[nbr]);
}

unsigned int	ft_print_mem_2(unsigned long long int nbr, char *base)
{
	unsigned int	len;

	len = 0;
	if (nbr == 0)
	{
		len += ft_print_str("(nil)");
		return (len);
	}
	else
	{
		len += ft_print_str("0x");
		ft_print_memory(nbr, base);
		len += ft_count(nbr);
	}
	return (len);
}

int	ft_count(unsigned long long nbr)
{
	int	len;

	len = 0;
	while (nbr)
	{
		len++;
		nbr = nbr / 16;
	}
	return (len);
}
