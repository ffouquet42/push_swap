/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 00:30:33 by fllanet           #+#    #+#             */
/*   Updated: 2023/02/03 02:39:48 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_data data;
	
	if (argc < 2)
		return (1);
	if (ft_check_argv(argc, argv))
		return (ft_putstr("Error\n"), 1);
	else
		ft_putstr("Valid\n");
	return (0);
}

// verif si on a que des int valide et pas de doublons
// ( si certains paramètres ne sont pas des nombres, ne tiennent pas dans un int, ou encore, s’il y a des doublons.)

// coder les fonctions de tri

// Value of INT_MAX is +2147483647
// Value of INT_MIN is -2147483648