/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abuhot <abuhot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 12:10:13 by abuhot            #+#    #+#             */
/*   Updated: 2023/07/23 14:50:13 by abuhot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_pourcent(char c, va_list list)
{
	int		b;
	char	*str;
	char	*str_maj;

	str = "0123456789abcdef";
	str_maj = "0123456789ABCDEF";
	b = 0;
	if (c == 'c')
		b += ft_print_chr(va_arg(list, int));
	else if (c == 's')
		b += ft_print_str(va_arg(list, char *));
	else if (c == 'd' || c == 'i')
		b += ft_print_nbr(va_arg(list, int));
	else if (c == 'u')
		b += ft_print_nbr_u(va_arg(list, unsigned int));
	else if (c == 'p')
		b += ft_print_mem_2(va_arg(list, unsigned long long int), str);
	else if (c == 'x')
		b += ft_print_utils_2(va_arg(list, unsigned int), str);
	else if (c == 'X')
		b += ft_print_utils_2(va_arg(list, unsigned int), str_maj);
	else if (c == '%')
		b += ft_print_chr('%');
	return (b);
}

int	ft_printf(const char *str, ...)
{
	int		temp;
	int		i;
	va_list	list;

	va_start(list, str);
	i = 0;
	temp = 0;
	while (str[i])
	{
		if (str[i] == '%')
			temp += ft_pourcent(str[++i], list);
		else
			temp += write(1, &str[i], 1);
		i++;
	}
	va_end(list);
	return (temp);
}
/*
int	main(void)
{
	ft_printf("%d\n", -1);
	printf("%d", -1);
}
*/