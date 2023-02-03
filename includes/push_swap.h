/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 00:30:30 by fllanet           #+#    #+#             */
/*   Updated: 2023/02/03 02:41:05 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

//--------------- INCLUDES ---------------//
# include <unistd.h>
# include <stdio.h>

//--------------- VARIABLES ---------------//

//--------------- STRUCTURES ---------------//

typedef struct s_data
{
	char	**stack_a;
	char	**stack_b;
}	t_data;

//--------------- PROTOTYPES ---------------//

//--------------- push_swap.c ---------------//
int		main(int argc, char **argv);

//--------------- VERIFICATION ---------------//

//--------------- argv.c ---------------//
int		ft_is_digit(char c);
int		ft_check_only_digit(char *str);
int		ft_check_argv(int argc, char **argv);

//--------------- UTILS ---------------//

//--------------- atoi.c ---------------//
int		ft_atoi(char *str);

//--------------- print.c ---------------//
void	ft_putchar(char c);
void	ft_putstr(char *str);

#endif
