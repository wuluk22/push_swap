/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mv_push.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegros <clegros@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 23:04:01 by clegros           #+#    #+#             */
/*   Updated: 2024/03/29 23:04:03 by clegros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push(t_stack_node **dst, t_stack_node **src)
{
	t_stack_node	*push_node;

	if (!*src | !src)
		return ;
	push_node = *src;
	*src = (*src)->next;
	if (*src)
		(*src)->prev = NULL;
	push_node->next = *dst;
	if (*dst)
		(*dst)->prev = push_node;
	*dst = push_node;
}

void	pa(t_stack_node **a, t_stack_node **b, bool print)
{
	push(a, b);
	if (!print)
		ft_printf("pa\n");
}

void	pb(t_stack_node **b, t_stack_node **a, bool print)
{
	push(b, a);
	if (!print)
		ft_printf("pb\n");
}
