/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5_values.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 17:32:24 by fllanet           #+#    #+#             */
/*   Updated: 2023/02/07 14:24:34 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	ft_find_lower_position(t_stack *stack)
{
	int	pos;
	int	i;
	int	lower_value;

	pos = 0;
	i = 0;
	lower_value = stack->value;
	while (stack)
	{
		if (stack->value < lower_value)
		{
			pos = i;
			lower_value = stack->value;
		}
		i++;
		stack = stack->next;
	}
	return (pos);
}

void	ft_put_lower_top_of_stack(t_stack **stack_a)
{
	int	pos;

	pos = ft_find_lower_position(*stack_a);
	if (pos <= 2)
	{
		while (ft_find_lower_position(*stack_a) != 0)
			rotate_a(stack_a, 1);
	}
	else
	{
		while (ft_find_lower_position(*stack_a) != 0)
			reverse_rotate_a(stack_a, 1);
	}
}

void	ft_sort_5_values(t_stack **stack_a, t_stack **stack_b)
{
	ft_put_lower_top_of_stack(stack_a);
	push_b(stack_a, stack_b, 1);
	ft_put_lower_top_of_stack(stack_a);
	push_b(stack_a, stack_b, 1);
	ft_sort_3_values(stack_a);
	push_a(stack_a, stack_b, 1);
	push_a(stack_a, stack_b, 1);
}
