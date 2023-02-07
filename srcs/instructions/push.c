/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 09:27:22 by fllanet           #+#    #+#             */
/*   Updated: 2023/02/07 14:09:44 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	push_a(t_stack **stack_a, t_stack **stack_b, int print)
{
	t_stack *tmp_stack;

	if (*stack_b == NULL)
		return ;
	tmp_stack = *stack_b;
	(*stack_b) = tmp_stack->next;
	tmp_stack->next = NULL;
	if (*stack_a == NULL)
		(*stack_a) = tmp_stack;	
	else
	{
		tmp_stack->next = (*stack_a);
		(*stack_a) = tmp_stack;
	}
	if (print)
		ft_putstr("pa\n");
}

void	push_b(t_stack **stack_a, t_stack **stack_b, int print)
{
	t_stack *tmp_stack;

	if (*stack_a == NULL)
		return ;
	tmp_stack = *stack_a;
	(*stack_a) = tmp_stack->next;
	tmp_stack->next = NULL;
	if (*stack_b == NULL)
		(*stack_b) = tmp_stack;	
	else
	{
		tmp_stack->next = (*stack_b);
		(*stack_b) = tmp_stack;
	}
	if (print)
		ft_putstr("pb\n");
}
