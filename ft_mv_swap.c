/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mv_swap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegros <clegros@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 23:04:31 by clegros           #+#    #+#             */
/*   Updated: 2024/03/29 23:04:50 by clegros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_stack_node **stack)
{
	t_stack_node	*first_node;

	if (!*stack || !(*stack)->next)
		return ;
	first_node = *stack;
	*stack = first_node->next;
	(*stack)->prev = NULL;
	first_node->prev = *stack;
	first_node->next = (*stack)->next;
	if ((*stack)->next)
		(*stack)->next->prev = first_node;
	(*stack)->next = first_node;
}

void	sa(t_stack_node **a, bool print)
{
	swap(a);
	if (!print)
		ft_printf("sa\n");
}

void	sb(t_stack_node **b, bool print)
{
	swap(b);
	if (!print)
		ft_printf("sb\n");
}

void	ss(t_stack_node **a, t_stack_node **b, bool print)
{
	swap(a);
	swap(b);
	if (!print)
		ft_printf("ss\n");
}
