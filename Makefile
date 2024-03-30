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
SRC     = push_swap.c\
			ft_init_a.c ft_init_b.c\
			ft_printf.c\
			ft_mv_push.c\
			ft_mv_rev_rotate.c\
			ft_mv_rotate.c\
			ft_mv_swap.c\
			ft_sort_stacks.c\
			ft_sort_three.c\
			ft_split.c\
			ft_stack_init.c\
			ft_stack_utils.c\
			ft_error_handle.c
OBJ     = $(SRC:.c=.o)
CC      = gcc
CFLAGS  = -Wall -Werror -Wextra
COMP    = $(CC) $(CFLAGS) $(LINK)
RM      = rm -f

all:    $(NAME)

$(NAME): $(OBJ)
	$(COMP) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re:     fclean all