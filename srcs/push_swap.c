/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 00:30:33 by fllanet           #+#    #+#             */
/*   Updated: 2023/02/04 10:31:21 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (1);
	if (ft_check_argv(argc, argv) == 1)
		return (ft_putstr("Error\n"), 1);
	else
		ft_setup(argc, argv);
	return (0);
}

// dev
void	ft_see_stacks(t_data *data)
{
	int	i;

	printf(" A      B \n");
	printf("----------\n");
	i = 0;
	while (i < 4)
	{
		printf(" %s      %s\n", data->stack_a[i], data->stack_b[i]);
		i++;
	}
}
