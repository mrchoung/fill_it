# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mfranc <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/24 16:24:51 by mfranc            #+#    #+#              #
#    Updated: 2016/11/28 17:10:45 by mfranc           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

FLAGS = -Wall -Wextra -Werror

LIB = -lft

SRC = ft_get_file.c				\
	  main.c					\
	  ft_check_file.c			\
	  ft_get_map.c				\
	  ft_check_map.c			\
	  ft_exit.c					\
	  ft_check.c				\
	  ft_check_tminos.c			\
	  ft_check_tminos_1_5.c		\
	  ft_check_tminos_6_10.c	\
      ft_check_tminos_11_15.c	\
	  ft_check_tminos_16_19.c

OBJ = $(SRCS:.c=.o )

all: $(NAME)

$(NAME):
	gcc -o $(NAME) $(FLAGS) $(SRC) -L. $(LIB)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
