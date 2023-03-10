/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 01:45:43 by fllanet           #+#    #+#             */
/*   Updated: 2023/02/10 10:43:04 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	ft_atoi(char *str)
{
	int	i;
	int	res;
	int	pos;	

	i = 0;
	res = 0;
	pos = 1;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == ' '))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			pos = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	return (res * pos);
}

void	ft_clear_stack(t_stack *stack)
{
	t_stack	*stack_cpy;

	if (!stack)
		return ;
	stack_cpy = stack;
	while (stack_cpy)
	{
		stack_cpy = stack_cpy->next;
		free(stack);
		stack = stack_cpy;
	}
}
