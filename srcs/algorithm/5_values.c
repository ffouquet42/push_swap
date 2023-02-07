/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5_values.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 17:32:24 by fllanet           #+#    #+#             */
/*   Updated: 2023/02/07 14:00:19 by fllanet          ###   ########.fr       */
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
	int i;

	pos = ft_find_lower_position(*stack_a);
	i = 0;
	while (i < pos)
	{
		rotate_a(stack_a, 1);
		i++;
	}
	// voir si pos est vers la fin ou le debut pour rotate ou reverse rotate
}

t_stack	*ft_put_aside_2_lower(t_stack **stack_a, t_stack **stack_b)
{
	
	ft_put_lower_top_of_stack(stack_a);
	push_b(stack_a, stack_b, 1);
	ft_put_lower_top_of_stack(stack_a);
	push_b(stack_a, stack_b, 1);
	return (*stack_a);
}

void	ft_sort_5_values(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*stack_a_3_highest;

	stack_a_3_highest = ft_put_aside_2_lower(stack_a, stack_b);
	ft_display_stack_2(*stack_a, *stack_b); // dev

	// ft_sort_3_values les 3 valeurs restantes
	// push A les deux valeurs de B
}
