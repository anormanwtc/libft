# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anorman <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/21 16:00:27 by anorman           #+#    #+#              #
#    Updated: 2019/06/06 15:09:43 by anorman          ###   ########.fr        #
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

re: fclean all
