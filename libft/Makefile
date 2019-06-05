# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anorman <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/21 16:00:27 by anorman           #+#    #+#              #
#    Updated: 2019/06/05 17:12:43 by anorman          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

FLAGS = -Wall -Werror -Wextra
NAME = output
LIBA = libft.a

.PHONY = clean fclean re

$(NAME):
	gcc -c $(FLAGS) ft_*.c
	ar -rcs $(LIBA) ft_*.o

all: $(NAME)

make_exe: all
	gcc main.c libft.a -o $(NAME)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(LIBA)

re: fclean all
