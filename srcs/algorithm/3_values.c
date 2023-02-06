/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_values.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 13:21:23 by fllanet           #+#    #+#             */
/*   Updated: 2023/02/06 16:30:17 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void ft_sort_3_values(t_stack **stack_a)
{
	t_stack *mid;

	mid = (*stack_a)->next;
	if ((*stack_a)->value < mid->value && mid->value > mid->next->value
		&& mid->next->value > (*stack_a)->value) // #1 - 1 3 2
	{
		reverse_rotate_a(stack_a);
		return (swap_a((*stack_a)));
	}
	if ((*stack_a)->value > mid->value && mid->value < mid->next->value
		&& mid->next->value > (*stack_a)->value) // #2 - 2 1 3
		return (swap_a((*stack_a)));
	if ((*stack_a)->value < mid->value && mid->value > mid->next->value
		&& mid->next->value < (*stack_a)->value) // #3 - 2 3 1
		return (reverse_rotate_a(stack_a));
	if ((*stack_a)->value > mid->value && mid->value < mid->next->value
		&& mid->next->value < (*stack_a)->value) // #4 - 3 1 2
		return (rotate_a(stack_a));
	if ((*stack_a)->value > mid->value && mid->value > mid->next->value
		&& mid->next->value < (*stack_a)->value) // #5 - 3 2 1
	{
		swap_a((*stack_a));
		return (reverse_rotate_a(stack_a));
	}
}
