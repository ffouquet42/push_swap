/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argv.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 02:31:50 by fllanet           #+#    #+#             */
/*   Updated: 2023/02/08 13:55:33 by fllanet          ###   ########.fr       */
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
	if (str[i] == '-')
		i++;
	while (str[i])
	{
		if (ft_is_digit(str[i]) == 1)
			return (1);
		i++;
	}
	return (0);
}

int	ft_check_double(int argc, char **argv, int i)
{
	int	j;

	j = i + 1;
	while (j < argc)
	{
		if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
			return (1);
		j++;
	}
	return (0);
}

int	ft_check_int_max_min(char *str)
{
	int		i;
	long	res;
	int		pos;

	i = 0;
	res = 0;
	pos = 1;
	if (str[i] == '-')
	{
		pos = -1;
		i++;
	}
	while (str[i])
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	res = res * pos;
	if (res > INT_MAX || res < INT_MIN)
		return (1);
	return (0);
}

int	ft_check_argv(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (ft_check_only_digit(argv[i]) == 1
			|| ft_check_int_max_min(argv[i]) == 1
			|| ft_check_double(argc, argv, i) == 1)
			return (1);
		i++;
	}
	return (0);
}
