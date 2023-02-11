/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 00:30:33 by fllanet           #+#    #+#             */
/*   Updated: 2023/02/11 20:59:42 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (1);
	if (ft_check_argv(argc, argv) == 1)
	{
		write(2, "Error\n", 6);
		return (1);
	}
	else
		ft_setup(argc, argv);
	return (0);
}

// ARG="4 67 3 87 23"; ./push_swap $ARG => Error