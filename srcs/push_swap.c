/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 00:30:33 by fllanet           #+#    #+#             */
/*   Updated: 2023/02/04 09:31:07 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_data data;
	
	if (argc < 2)
		return (1);
	if (ft_check_argv(argc, argv) == 1)
		return (ft_putstr("Error\n"), 1);
	else
		ft_putstr("Valid\n");
	return (0);
}

// recuperer les argv en tableau de int
// Coder les fonctions de tri