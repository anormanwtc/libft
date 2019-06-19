# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anorman <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/18 18:03:52 by anorman           #+#    #+#              #
#    Updated: 2019/06/19 18:26:38 by anorman          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all:
	 make -C libft/ fclean
	 make -C libft/
	 clang -Wall -Wextra -Werror -I libft/includes -o get_next_line.o -c get_next_line.c
	 clang -Wall -Wextra -Werror -I libft/includes -o maintest.o -c maintest.c
	 clang -o test_gnl maintest.o get_next_line.o -I libft/includes -L libft/ -lft

clean:
	make -C libft/ clean
	rm get_next_line.o maintest.o

fclean: clean
	make -C libft/ fclean
	rm test_gnl

