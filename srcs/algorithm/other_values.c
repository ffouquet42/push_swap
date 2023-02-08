/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   other_values.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:36:54 by fllanet           #+#    #+#             */
/*   Updated: 2023/02/08 14:42:35 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	ft_push_b_lower(t_stack **stack_a, t_stack **stack_b, int average)
{
	int	size;

	size = ft_stack_size(*stack_a);
	if ((*stack_a)->value < average)
	{
		push_b(stack_a, stack_b, 1);
		return (size - 1);
	}
	else
		rotate_a(stack_a, 1);
	return (size);
}

int	ft_find_highest_position(t_stack *stack)
{
	int	pos;
	int	i;
	int	highest_position;

	pos = 0;
	i = 0;
	highest_position = stack->value;
	while (stack)
	{
		if (stack->value > highest_position)
		{
			pos = i;
			highest_position = stack->value;
		}
		i++;
		stack = stack->next;
	}
	return (pos);
}

void	ft_push_a_highest(t_stack **stack_a, t_stack **stack_b)
{
	int	pos;
	int	size;

	pos = ft_find_highest_position(*stack_b);
	size = ft_stack_size(*stack_b);
	if (pos <= (size / 2))
	{
		while (pos >= 1)
		{
			rotate_b(stack_b, 1);
			pos--;
		}
	}
	else
	{
		while (pos < size)
		{
			reverse_rotate_b(stack_b, 1);
			pos++;
		}
	}
	push_a(stack_a, stack_b, 1);
}

void	ft_sort_other_values(t_stack **stack_a, t_stack **stack_b)
{
	int	size;
	int	average;

	size = ft_stack_size(*stack_a);
	average = 0;
	while (size > 3)
	{
		average = ft_find_average(ft_sort_tab(ft_tab(*stack_a), size), size, 0);
		size = ft_push_b_lower(stack_a, stack_b, average);
	}
	ft_sort_3_values(stack_a);
	while (*stack_b)
		ft_push_a_highest(stack_a, stack_b);
}
