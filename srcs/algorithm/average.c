/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   average.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:50:20 by fllanet           #+#    #+#             */
/*   Updated: 2023/02/07 16:18:08 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

// Met toute les value dans un tableau de int
int	*ft_tab(t_stack **stack)
{
	int	*tab;
	int	size;
	int	i;

	if (*stack == NULL)
		return (0);
	size = ft_stack_size(stack);
	i = 0;
	tab = malloc(sizeof(int *) * (size + 1));
	if (!tab)
		return (0);
	// while (*stack)
	// {
	// 	tab[i] = (*stack)->value;
	// 	(*stack) = (*stack)->next;
	// 	i++;
	// }
	return (tab);
}

// Trie toute les values
int	*ft_sort_tab(int *tab, int size)
{
	
}

// Retourne la moyenne
int	ft_find_average(t_stack *stack, int size)
{
	
}