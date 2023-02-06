/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 09:27:28 by fllanet           #+#    #+#             */
/*   Updated: 2023/02/06 14:08:39 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	reverse_rotate_a(t_stack **stack_a)
{
	t_stack *seclast;
	t_stack *last;
	
	if (!(*stack_a) || !(*stack_a)->next)
		return ;
	seclast = NULL;
	last = *stack_a;
	while (last->next != NULL)
	{
		seclast = last;
		last = last->next;
	}
	seclast->next = NULL;
	last->next = *stack_a;
	*stack_a = last;
	ft_putstr("rra\n");
}

void	reverse_rotate_b(t_stack **stack_b)
{
	ft_putstr("rrb\n");
}
