# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clegros <clegros@student.s19.be>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/05 11:19:07 by clegros           #+#    #+#              #
#    Updated: 2024/03/05 11:19:09 by clegros          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME    = push_swap
OBJ     = $(SRC:.c=.o)
SRC     = push_swap.c ft_lst_utils.c move_utils.c move_utils_2.c move_utils_3.c
CC      = gcc
CFLAGS  = -Wall -Werror -Wextra
COMP    = $(CC) $(CFLAGS) $(LINK) -fsanitize=address
RM      = rm -f

all:    $(NAME)

$(NAME): $(OBJ) fractol.h
	$(COMP) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ) $(BONUS_O)

fclean: clean
	$(RM) $(NAME)

re:     fclean all