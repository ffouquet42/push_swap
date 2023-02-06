/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 09:27:25 by fllanet           #+#    #+#             */
/*   Updated: 2023/02/06 16:37:17 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	rotate_a(t_stack **stack_a)
{
	t_stack *first;
	t_stack *last;

	first = *stack_a;
	last = *stack_a;
	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	while (last->next != NULL)
        last = last->next;
	*stack_a = first->next;
	first->next = NULL;
	last->next = first;
	ft_putstr("ra\n");
}

void	rotate_b(t_stack **stack_b)
{
	t_stack *first;
	t_stack *last;

	first = *stack_b;
	last = *stack_b;
	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	while (last->next != NULL)
        last = last->next;
	*stack_b = first->next;
	first->next = NULL;
	last->next = first;
	ft_putstr("rb\n");
}

void	rotate_a_and_b(t_stack **stack_a, t_stack **stack_b)
{
	rotate_a(stack_a);
	rotate_b(stack_b);
}
