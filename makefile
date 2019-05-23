# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anorman <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/21 16:00:27 by anorman           #+#    #+#              #
#    Updated: 2019/05/23 13:24:30 by anorman          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Werror -Wextra
OUT = testname
LIBA = libft.a

.PHONY = clean fclean re

make:
	gcc -c $(FLAGS) ft_*.c
	ar -rcs $(LIBA) ft_*.o

all: make

make_exe: make
	gcc main.c libft.a -o $(OUT)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(OUT)

re: fclean all
