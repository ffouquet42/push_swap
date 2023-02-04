/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setup.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fllanet <fllanet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 09:43:48 by fllanet           #+#    #+#             */
/*   Updated: 2023/02/04 10:31:48 by fllanet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

char	**ft_setup_stack_a(int argc, char **argv)
{
	char	**tmp_stack;
	int		i;

	tmp_stack = malloc(sizeof(char *) * (argc));
	if (!tmp_stack)
		return (NULL);
	i = 0;
	while (i < argc - 1)
	{
		tmp_stack[i] = argv[i + 1];
		i++;
	}
	tmp_stack[i] = NULL;
	return (tmp_stack);
}

char	**ft_setup_stack_b(int argc)
{
	char	**tmp_stack;
	int		i;

	tmp_stack = malloc(sizeof(char *) * (argc));
	if (!tmp_stack)
		return (NULL);
	i = 0;
	while (i < argc)
	{
		tmp_stack[i] = NULL;
		i++;
	}
	return (tmp_stack);
}

void	ft_setup(int argc, char **argv)
{
	t_data	data;
	
	data.stack_a = ft_setup_stack_a(argc, argv);
	data.stack_b = ft_setup_stack_b(argc);
	ft_see_stacks(&data);
}