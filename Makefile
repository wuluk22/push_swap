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
SRC     = push_swap.c\
			ft_init_a_to_b.c ft_init_b_to_a.c\
			ft_lst_utils.c\
			ft_printf.c\
			ft_push.c\
			ft_rev_rotate.c\
			ft_rotate.c\
			ft_sort_stacks_utils.c\
			ft_sort_stacks.c\
			ft_sort.c\
			ft_split.c\
			ft_stack_init.c\
			ft_stack_utils.c\
			ft_swap.c\
			ft_error_handle.c
CC      = gcc
CFLAGS  = -Wall -Werror -Wextra
COMP    = $(CC) $(CFLAGS) $(LINK) -fsanitize=address
RM      = rm -f

all:    $(NAME)

$(NAME): $(OBJ) push_swap.h
	$(COMP) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re:     fclean all