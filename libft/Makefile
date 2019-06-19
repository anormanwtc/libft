# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anorman <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/21 16:00:27 by anorman           #+#    #+#              #
#    Updated: 2019/06/19 16:15:23 by anorman          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Werror -Wextra
NAME = libft.a

all: $(NAME)

$(NAME):
	gcc -c $(FLAGS) ft_*.c
	ar -rcs $(NAME) ft_*.o

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

gnl: all
	make clean
	mv $(NAME) ../get_next_line/
	cp libft.h ../get_next_line/

printf: all
	make clean
	mv $(NAME) ../printf/
	cp libft.h ../printf/

re: fclean all
