/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   average.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 15:50:20 by fllanet           #+#    #+#             */
/*   Updated: 2023/02/07 19:17:58 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	*ft_tab(t_stack *stack)
{
	int	*tab;
	int	size;
	int	i;

	if (stack == NULL)
		return (0);
	size = ft_stack_size(stack);
	i = 0;
	tab = malloc(sizeof(int) * (size + 1));
	if (!tab)
		return (0);
	while (stack)
	{
		tab[i] = stack->value;
		stack = stack->next;
		i++;
	}
	return (tab);
}

int	*ft_sort_tab(int *tab, int size)
{
	int	i;
	int	j;
	int tmp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
	return (tab);
}

int	ft_find_average(int *tab, int size, int i)
{
	int average;
	
	if (size >= 0 && size <= 100)
	{
		while (i <= (size / 5))
			i++;
	}
	else if (size >= 101 && size <= 150)
	{
		while (i <= (size / 7))
			i++;
	}
	else if (size >= 151 && size <= 250)
	{
		while (i <= (size / 15))
			i++;
	}
	else if (size > 250)
	{
		while (i <= (size / 17))
			i++;
	}
	average = tab[i];
	return (free(tab), average);
}
