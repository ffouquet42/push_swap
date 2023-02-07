/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   other_values.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:36:54 by fllanet           #+#    #+#             */
/*   Updated: 2023/02/07 19:59:24 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	ft_push_b_lower(t_stack **stack_a, t_stack **stack_b, int average)
{
	int size;

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
	
}
