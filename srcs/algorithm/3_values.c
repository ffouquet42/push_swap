/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_values.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 13:21:23 by fllanet           #+#    #+#             */
/*   Updated: 2023/02/08 14:41:21 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_sort_3_values(t_stack **stack_a)
{
	t_stack	*mid;

	mid = (*stack_a)->next;
	if ((*stack_a)->value < mid->value && mid->value > mid->next->value
		&& mid->next->value > (*stack_a)->value)
	{
		reverse_rotate_a(stack_a, 1);
		return (swap_a((*stack_a), 1));
	}
	if ((*stack_a)->value > mid->value && mid->value < mid->next->value
		&& mid->next->value > (*stack_a)->value)
		return (swap_a((*stack_a), 1));
	if ((*stack_a)->value < mid->value && mid->value > mid->next->value
		&& mid->next->value < (*stack_a)->value)
		return (reverse_rotate_a(stack_a, 1));
	if ((*stack_a)->value > mid->value && mid->value < mid->next->value
		&& mid->next->value < (*stack_a)->value)
		return (rotate_a(stack_a, 1));
	if ((*stack_a)->value > mid->value && mid->value > mid->next->value
		&& mid->next->value < (*stack_a)->value)
	{
		swap_a((*stack_a), 1);
		return (reverse_rotate_a(stack_a, 1));
	}
}
