/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckunimur <ckunimur@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 20:17:10 by ckunimur          #+#    #+#             */
/*   Updated: 2024/01/08 21:00:00 by ckunimur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


//number_of_philosophers time_to_die time_to_eat time_to_sleep
//[number_of_times_each_philosopher_must_eat]


#include "../include/philo.h"

int	main(int argc, char **argv)
{
	t_config	*args;

	args = get_args();
	if (valid_args(argc, argv))
		return(1);
	if(lay_the_table(args, argc, argv))
		return (1);
	
}

int	lay_the_table(t_config *args, int argc, char **argv)
{
	int	i;

	i = 0;
	args->n_philo = ft_atoi(argv[1]);
	args->time_to_die = ft_atoi(argv[2]);
	args->time_to_eat = ft_atoi(argv[3]);
	args->time_to_sleep = ft_atoi(argv[4]);
	if (argc == 6)
		args->n_meals(ft_atoi(argv[5]));
	else if (argc == 6)
		args->n_meals = -1;
}

int	valid_args(int argc, char **argv)
{
	int	i;

	if (argc < 5 || argc > 6)
	{
		printf("Invalid number of arguments");
		return (1);
	}
	i = 1;
	while (argv[i])
	{
		if (!ft_isdigit(ft_atoi(argv[i])))
			return(1);
		i++;
	}
	return (0);
}
t_config	*get_args(void)
{
	static t_config args;
	return (&args);
}