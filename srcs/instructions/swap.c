/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 09:27:18 by fllanet           #+#    #+#             */
/*   Updated: 2023/02/06 16:44:10 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	swap_a(t_stack *stack_a, int print)
{
	int	size;
	int	tmp_value;

	size = ft_stack_size(stack_a);
	if (size >= 2)
	{
		tmp_value = stack_a->value;
		stack_a->value = stack_a->next->value;
		stack_a->next->value = tmp_value;
		if (print)
			ft_putstr("sa\n");
	}
}

void	swap_b(t_stack *stack_b, int print)
{
	int	size;
	int	tmp_value;

	size = ft_stack_size(stack_b);
	if (size >= 2)
	{
		tmp_value = stack_b->value;
		stack_b->value = stack_b->next->value;
		stack_b->next->value = tmp_value;
		if (print)
			ft_putstr("sb\n");
	}
}

void	swap_a_and_b(t_stack *stack_a, t_stack *stack_b)
{
	swap_a(stack_a, 0);
	swap_b(stack_b, 0);
}
