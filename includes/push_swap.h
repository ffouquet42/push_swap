/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 00:30:30 by fllanet           #+#    #+#             */
/*   Updated: 2023/02/06 16:11:43 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

//--------------- INCLUDES ---------------//
# include <unistd.h>
# include <stdio.h>
# include <limits.h>
# include <stdlib.h>

//--------------- VARIABLES ---------------//

//--------------- STRUCTURES ---------------//

typedef struct s_stack
{
	int				value;
	struct s_stack	*next;
}	t_stack;

//--------------- PROTOTYPES ---------------//

//--------------- push_swap.c ---------------//
int		main(int argc, char **argv);

//--------------- INSTRUCTIONS ---------------//

//--------------- push.c ---------------//
void	push_a(t_stack *stack_a, t_stack *stack_b);
void	push_b(t_stack *stack_a, t_stack *stack_b);

//--------------- reverse.c ---------------//
void	reverse_rotate_a(t_stack **stack_a);
void	reverse_rotate_b(t_stack **stack_b);
void	reverse_rotate_a_and_b(t_stack **stack_a, t_stack **stack_b);

//--------------- rotate.c ---------------//

//--------------- swap.c ---------------//
void	swap_a(t_stack *stack_a);
void	swap_b(t_stack *stack_b);
void	swap_a_and_b(t_stack *stack_a, t_stack *stack_b);

//--------------- VERIFICATION ---------------//

//--------------- argv.c ---------------//
int		ft_is_digit(char c);
int		ft_check_only_digit(char *str);
int		ft_check_double(int argc, char **argv, int i);
int		ft_check_int_max_min(char *str);
int		ft_check_argv(int argc, char **argv);

//--------------- SETUP ---------------//

//--------------- setup.c ---------------//
void	ft_setup(int argc, char **argv);
t_stack	*ft_stack_new(int value);
void	ft_stack_add_back(t_stack **stack, t_stack *new);
int		ft_is_sorted(t_stack *stack);
void	ft_algorithm_choice(t_stack *stack_a, int nb);

//--------------- UTILS ---------------//

//--------------- tools.c ---------------//
int		ft_atoi(char *str);

//--------------- print.c ---------------//
void	ft_putchar(char c);
void	ft_putstr(char *str);

//--------------- stack_handling.c ---------------//
int		ft_stack_size(t_stack *stack);

//--------------- ALGORITHM ---------------//

//--------------- 3_values.c ---------------//
void	ft_sort_3_values(t_stack **stack_a);

#endif
