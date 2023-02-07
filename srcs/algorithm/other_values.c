/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   other_values.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 14:36:54 by fllanet           #+#    #+#             */
/*   Updated: 2023/02/07 17:24:04 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	ft_sort_other_values(t_stack **stack_a, t_stack **stack_b)
{
	int	size;
	int	average;

	size = ft_stack_size(*stack_a);
	average = 0;
	// while (size > 3) // >=
	// {
	// 	average = ft_find_average(ft_sort_tab(ft_tab(stack_a), size), size);
	// }
	// printf("stack A size : %i\n", size); // dev
	ft_find_average(ft_sort_tab(ft_tab(*stack_a), size), size);
	// ft_display_stack_2(*stack_a, *stack_b);
	
}
