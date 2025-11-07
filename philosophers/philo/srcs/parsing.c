/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 15:01:30 by thodavid          #+#    #+#             */
/*   Updated: 2025/08/14 09:49:41 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philo.h"

int	check_args(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	if ((ac < 5) || (ac > 6))
	{
		ft_error("φ ARG ERR φ\n==HINT: 4 or 5 arguments only==");
		return (0);
	}
	while (av[i])
	{
		j = 0;
		if (av[i][0] == '\0')
			return (ft_error("φ ARG ERR φ\n==HINT: empty arg=="), (0));
		while (av[i][j])
		{
			if (!ft_isdigit(av[i][j]))
				return (ft_error("φ ARG ERR φ\n==HINT: positive  int=="), (0));
			j++;
		}
		i++;
	}
	return (1);
}

int	data_init(t_data *data, char **av)
{
	data->number_of_philos = ft_atoi(av[1]);
	data->time_to_die = ft_atol(av[2]);
	data->time_to_eat = ft_atol(av[3]);
	data->time_to_sleep = ft_atol(av[4]);
	data->full_philo_count = 0;
	if (av[5] && *av[5] != '\0')
	{
		data->max_meal_activ = 1;
		data->max_meal = ft_atoi(av[5]);
	}
	else
	{
		data->max_meal_activ = 0;
		data->max_meal = -1;
	}
	data->stop = 0;
	data->start = get_timestamp_ms();
	data->death = 0;
	if (check_data(data) == 0)
		return (0);
	return (1);
}

int	mutex_init(t_data *data)
{
	if (pthread_mutex_init(&(data->print_mutex), NULL) != 0)
		return (ft_error("φ mutex_init err φ (1)"), (0));
	if (pthread_mutex_init(&(data->state_mutex), NULL) != 0)
	{
		ft_error("φ mutex_init err φ (2)");
		pthread_mutex_destroy(&(data->print_mutex));
		return (0);
	}
	data->philos_arr = philo_arr_init(data->number_of_philos,
			data);
	if (data->philos_arr == NULL)
	{
		pthread_mutex_destroy(&(data->print_mutex));
		pthread_mutex_destroy(&(data->state_mutex));
		return (0);
	}
	if ((fork_mutex_arr_init(data)) == 0)
	{	
		free(data->philos_arr);
		pthread_mutex_destroy(&(data->print_mutex));
		pthread_mutex_destroy(&(data->state_mutex));
		return (0);
	}
	return (1);
}

t_data	*stock_data(char **av)
{
	t_data	*data;

	data = malloc(sizeof(t_data));
	if (data == NULL)
	{
		ft_error("φ data_info malloc failed φ");
		return (NULL);
	}
	if (data_init(data, av) == 0)
	{
		free(data);
		return (NULL);
	}
	if (mutex_init(data) == 0)
	{
		free(data);
		return (NULL);
	}
	return (data);
}

int	check_data(t_data *data)
{
	if (data->number_of_philos <= 0 || data->number_of_philos > 200)
		return (ft_error("φ PHILO ERR φ"), (0));
	if (data->time_to_die < 1
		|| data->time_to_eat < 1
		|| data->time_to_sleep < 1)
		return (ft_error("φ TIME TO DIE ERR φ"), (0));
	if (data->max_meal_activ && data->max_meal < 1)
		return (ft_error("φ MEAL ERR φ"), (0));
	return (1);
}
