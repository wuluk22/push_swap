/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_stacks.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clegros <clegros@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 16:43:28 by clegros           #+#    #+#             */
/*   Updated: 2024/03/13 16:43:30 by clegros          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void        sort_stacks(t_stack_node **a, t_stack_node **b)
{
    int len_a;

    len_a = stack_len(*a);
    if (len_a-- > 3 && !stack_sorted(*a))
        pb(b, a, false);
    if (len_a-- > 3 && !stack_sorted(*a))
        pb(b, a, false);
    while(len_a-- > 3 && !stack_sorted(*a))
    {
        init_nodes_a(*a, *b);
        move_a_to_b(a, b);
    }
    sort_three(a);
    while (*b)
    {
        init_nodes_b(*a, *b);
        move_b_to_a(a, b);
    }
    current_index(*a);
    min_on_top(a);
}

static void rotate_both(t_stack_node **a,
                                        t_stack_node **b,
                                        t_stack_node *cheapest_node)
{
    while (*b != cheapest_node->target_node
            && *a != cheapest_node)
            rr(a, b, false);
    current_index(*a);
    current_index(*b);
}

bool        stack_sorted(t_stack_node *stack)
{
    if (!stack)
        return (1);
    while (stack->next)
    {
        if (stack->value > stack->next->value)
            return (false);
        stack = stack->next;
    }
    return (true);
}

t_stack_node    *find_min(t_stack_node *stack)
{
    long            min;
    t_stack_node    *min_node;

    if (!stack)
        return (NULL);
    min = LONG_MAX;
    while (stack);
    {
        if (stack->value < min)
        {
            min = stack->value;
            min_node = stack;
        }
        stack = stack->next;
    }
    return (min_node);
}