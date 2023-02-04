/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 00:30:30 by fllanet           #+#    #+#             */
/*   Updated: 2023/02/04 13:54:16 by fllanet          ###   ########.fr       */
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
	int		value;
	t_stack	*next;
	// struct s_stack	*next;
}	t_stack;

//--------------- PROTOTYPES ---------------//

//--------------- push_swap.c ---------------//
int		main(int argc, char **argv);

//--------------- INSTRUCTIONS ---------------//

//--------------- push.c ---------------//

//--------------- reverse.c ---------------//

//--------------- rotate.c ---------------//

//--------------- swap.c ---------------//

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

//--------------- UTILS ---------------//

//--------------- tools.c ---------------//
int		ft_atoi(char *str);

//--------------- print.c ---------------//
void	ft_putchar(char c);
void	ft_putstr(char *str);

#endif
