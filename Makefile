# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abuhot <abuhot@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/20 18:46:46 by abuhot            #+#    #+#              #
#    Updated: 2023/07/22 14:55:33 by abuhot           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
CC = gcc -Wall -Wextra -Werror
SRC = ft_print_chr.c ft_printf.c ft_print_utils.c ft_print_memory.c ft_print_nbr.c ft_print_nbr_u.c ft_print_str.c
OBJ = $(SRC:.c=.o)

$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ);
all: $(NAME)

clean:
	rm -f *.o;

fclean: clean
	rm -f $(NAME);

re: fclean all
