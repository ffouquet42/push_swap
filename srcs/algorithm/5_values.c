/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   5_values.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 17:32:24 by fllanet           #+#    #+#             */
/*   Updated: 2023/02/06 18:18:52 by fllanet          ###   ########.fr       */
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

t_stack	*ft_put_aside_2_lower(t_stack *stack_a, t_stack *stack_b)
{
	ft_find_lower_position(stack_a);
	return (stack_a); // dev (creet un t_stack de 3 (sans le 2 plus petit) et le return)
}

void	ft_sort_5_values(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*stack_a_3_highest;

	// push B les 2 plus petites valeurs de A
	stack_a_3_highest = ft_put_aside_2_lower(stack_a, stack_b);
	// display tout ma nouvelle stack pour verif (A + B)

	// ft_sort_3_values les 3 valeurs restantes
	// push A les deux valeurs de B
}
