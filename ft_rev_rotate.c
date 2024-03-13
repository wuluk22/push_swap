/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegros <clegros@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 16:43:06 by clegros           #+#    #+#             */
/*   Updated: 2024/03/13 16:43:08 by clegros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void rev_rotate(t_stack_node **stack)
{
    t_stack_node    *last;

    if (!*stack || !(*stack)->next)
        return ;
    last = find_last(*stack);
    last->prev->next = NULL;
    last->next = *stack;
    last->prev = NULL;
    *stack = last;
    last->next->prev = last;
}

void        rra(t_stack_node **a, bool print)
{
    rev_rotate(a);
    if (!print)
        ft_printf("rra\n");
}

void        rrb(t_stack_node **b, bool print)
{
    rev_rotate(b);
    if (!print)
        ft_printf("rrb\n");
}

void        rrr(t_stack_node **a, t_stack_node **b, bool print)
{
    rev_rotate(a);
    rev_rotate(b);
    if (!print)
        ft_printf("rrr\n");
}
