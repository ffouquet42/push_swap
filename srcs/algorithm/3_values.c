/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_values.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 13:21:23 by fllanet           #+#    #+#             */
/*   Updated: 2023/02/06 14:11:49 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void ft_sort_3_values(t_stack *stack_a, t_stack *stack_b)
{
	t_stack *mid;

	mid = stack_a->next;
	// #0 - 1 2 3
	// #1 - 1 3 2
	// if (stack_a->value < mid->value && mid->value > mid->next->value)
	// {
		
	// }
	// #2 - 2 1 3
	if (stack_a->value > mid->value && mid->value < mid->next->value
		&& mid->next->value > stack_a->value)
		return (swap_a(stack_a));
	// #3 - 2 3 1
	if (stack_a->value < mid->value && mid->value > mid->next->value
		&& mid->next->value < stack_a->value)
		return (reverse_rotate_a(&stack_a));
	// #4 - 3 1 2
	// #5 - 3 2 1
}
