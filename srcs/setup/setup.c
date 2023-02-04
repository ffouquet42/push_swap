/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setup.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 13:16:20 by fllanet           #+#    #+#             */
/*   Updated: 2023/02/04 16:55:33 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_stack	*ft_stack_new(int value)
{
	t_stack	*stack_tmp;

	stack_tmp = malloc(sizeof(t_stack));
	if (!stack_tmp)
		return (NULL);
	stack_tmp->value = value;
	stack_tmp->next = NULL;
	return (stack_tmp);
}

void	ft_stack_add_back(t_stack **stack, t_stack *new)
{
	t_stack	*ptr;

	if (*stack == NULL)
		*stack = new;
	else
	{
		ptr = *stack;
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = new;
	}
}

void	ft_setup(int argc, char **argv)
{
	t_stack *stack_a;
	t_stack *stack_tmp;
	int		i;

	stack_a = NULL;
	stack_tmp = NULL;
	i = 1;
	while (i < argc)
	{
		stack_tmp = ft_stack_new(ft_atoi(argv[i]));
		ft_stack_add_back(&stack_a, stack_tmp);
		i++;
	}
	ft_display_stack(&stack_a);
}

// dev
void	ft_display_stack(t_stack *stack)
{
    t_stack *stack_tmp;
	
	stack_tmp = stack;
	printf("-----------------------------------\n");
   	while (stack_tmp)
	{
        printf("%i\n", stack_tmp->value);
        stack_tmp = stack_tmp->next;
    }
	printf("-----------------------------------\n");
}
