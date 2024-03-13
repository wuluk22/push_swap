/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegros <clegros@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 11:18:57 by clegros           #+#    #+#             */
/*   Updated: 2024/03/05 11:19:00 by clegros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdbool.h>

typedef struct s_stack_node
{
	int				value;
	int				index;
	int				push_price;
	bool			above_median;
	bool			cheapest;
	struct s_stack_node	*prev;
	struct s_stack_node	*next;
}	t_stack_node;

void	ft_lstadd_back(t_stack_node **lst, t_stack_node *new);
void	ft_lstadd_front(t_stack_node **lst, t_stack_node *new);
int		ft_lstsize(t_stack_node *lst);

size_t	ft_strlen(const char *s);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strdup(const char *s1);
void	*ft_memcpy(void *dst, const void *src, size_t n);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	**ft_split(char const *s, char c);

#endif