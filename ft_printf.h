/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abuhot <abuhot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 12:10:27 by abuhot            #+#    #+#             */
/*   Updated: 2023/07/22 18:26:12 by abuhot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>

unsigned int	ft_print_mem_2(unsigned long long int nbr, char *base);
void			ft_print_memory(unsigned long long int nbr, char *base);
int				ft_count(unsigned long long nbr);
unsigned int	ft_strlen(char *base);
void			ft_print_utils(unsigned long long int nbr, char *base);
unsigned int	ft_print_utils_2(unsigned long long int nbr, char *base);
unsigned int	ft_print_nbr_u(unsigned int nbr);
int				ft_print_nbr(int nbr);
int				ft_print_str(char *str);
int				ft_print_chr(char c);
int				ft_printf(const char *str, ...);

#endif
