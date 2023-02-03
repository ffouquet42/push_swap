/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argv.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 02:31:50 by fllanet           #+#    #+#             */
/*   Updated: 2023/02/03 02:39:19 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"


int	ft_is_digit(char c)
{
	char	*digit;
	int		i;

	digit = "0123456789";
	i = 0;
	while (digit[i])
	{
		if (digit[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int	ft_check_only_digit(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_is_digit(str[i]))
			return (1);
		i++;
	}
	return (0);
}

int	ft_check_argv(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (ft_check_only_digit(argv[i]))
			return (1);
		i++;
	}
	return (0);
}
