/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abuhot <abuhot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 15:59:36 by abuhot            #+#    #+#             */
/*   Updated: 2023/07/23 15:40:48 by abuhot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_strlen(char *base)
{
	unsigned int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

void	ft_print_utils(unsigned long long int nbr, char *base)
{
	if (nbr >= ft_strlen(base))
	{
		ft_print_utils(nbr / ft_strlen(base), base);
		nbr %= ft_strlen(base);
	}
	ft_print_chr(base[nbr]);
}

unsigned int	ft_print_utils_2(unsigned long long int nbr, char *base)
{
	unsigned int	len;

	len = 0;
	if (nbr == 0)
	{
		len += ft_print_str("0");
		return (len);
	}
	ft_print_utils(nbr, base);
	len += ft_count(nbr);
	return (len);
}
/*
int	main(void)
{
	ft_printf("%x\n", 0);
	printf("%x\n", 0);
}
*/
