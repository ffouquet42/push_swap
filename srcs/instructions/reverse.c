/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 09:27:28 by fllanet           #+#    #+#             */
/*   Updated: 2023/02/08 14:39:49 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	reverse_rotate_a(t_stack **stack_a, int print)
{
	t_stack	*sec_last;
	t_stack	*last;

	sec_last = NULL;
	last = *stack_a;
	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	while (last->next != NULL)
	{
		sec_last = last;
		last = last->next;
	}
	sec_last->next = NULL;
	last->next = *stack_a;
	*stack_a = last;
	if (print)
		ft_putstr("rra\n");
}

void	reverse_rotate_b(t_stack **stack_b, int print)
{
	t_stack	*sec_last;
	t_stack	*last;

	sec_last = NULL;
	last = *stack_b;
	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	while (last->next != NULL)
	{
		sec_last = last;
		last = last->next;
	}
	sec_last->next = NULL;
	last->next = *stack_b;
	*stack_b = last;
	if (print)
		ft_putstr("rrb\n");
}

void	reverse_rotate_a_and_b(t_stack **stack_a, t_stack **stack_b)
{
	reverse_rotate_a(stack_a, 0);
	reverse_rotate_b(stack_b, 0);
	ft_putstr("rrr\n");
}
