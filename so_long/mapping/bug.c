/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bug.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 11:56:09 by thodavid          #+#    #+#             */
/*   Updated: 2025/04/19 12:00:27 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../src/so_long.h"

int	buggy_case(char **map)
{
	int	i;
	int	j;
	int	row;

	i = 0;
	j = 0;
	row = -1;
	while (map[i])
	{
		j = 0;
		while (map[i][j] && (map[i][j] == '1'))
			j++;
		if (map[i][j] != '\0')
		{
			if (row != -1)
				return (-2);
			row = i;
		}
		i++;
	}
	return (row);
}

int	line_bad_order(char *line)
{
	int	i;
	int	p;
	int	e;
	int	c_after_e;

	i = 0;
	p = -1;
	e = -1;
	c_after_e = 0;
	while (line[i])
	{
		if ((line[i] == 'P' || line[i] == 'p') && p == -1)
			p = i;
		if ((line[i] == 'E' || line[i] == 'e') && e == -1)
			e = i;
		if ((line[i] == 'C' || line[i] == 'c') && e != -1)
			c_after_e = 1;
		i++;
	}
	return ((p != -1) && (e != -1) && (p < e) && (c_after_e));
}

int	buggy_line(char **map)
{
	int	row;

	row = buggy_case(map);
	if (row < 0)
		return (0);
	return (line_bad_order(map[row]));
}
