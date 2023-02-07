/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setup.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 13:16:20 by fllanet           #+#    #+#             */
/*   Updated: 2023/02/07 14:25:09 by fllanet          ###   ########.fr       */
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
	t_stack	*last;

	if (*stack == NULL)
		*stack = new;
	else
	{
		last = *stack;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
}

int	ft_is_sorted(t_stack *stack)
{
	while (stack->next)
	{
		if (stack->value > stack->next->value)
			return (0);
		stack = stack->next;
	}
	return (1);
}

void	ft_algorithm_choice(t_stack *stack_a, int nb)
{
	t_stack *stack_b;
	
	stack_b = NULL;
	ft_display_stack_2(stack_a, stack_b); // dev
	if (nb == 2)
		swap_a(stack_a, 1);
	else if (nb == 3)
		ft_sort_3_values(&stack_a);
	else if (nb == 4)
		printf("nb : 4\n");
	else if (nb == 5)
		ft_sort_5_values(&stack_a, &stack_b);
	else if (nb >= 6)
		printf("nb : 6+\n");
	ft_display_stack_2(stack_a, stack_b); // dev
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
	if (ft_is_sorted(stack_a) == 0)
		ft_algorithm_choice(stack_a, argc - 1);
}


// dev
void	ft_display_stack(t_stack *stack_a)
{
	printf("-----------------------------------\n");
   	while (stack_a)
	{
        printf(" A : %i |  B : %i\n", stack_a->value, 0);
        stack_a = stack_a->next;
    }
	printf("-----------------------------------\n");
}

void	ft_display_stack_2(t_stack *stack_a, t_stack *stack_b)
{
	printf("-----------------------------------\n");
   	while (stack_a)
	{
		printf(" A : %i ", stack_a->value);
		if (stack_b)
		{
			printf("|  B : %i\n", stack_b->value);
			stack_b = stack_b->next;
		}
		else
        	printf("\n");
        stack_a = stack_a->next;
    }
	// printf(" A 2 : %i ", stack_a->value);
	printf("-----------------------------------\n");
}
