/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_lines.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkist-si <vkist-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 21:07:53 by vkist-si          #+#    #+#             */
/*   Updated: 2022/09/17 21:07:57 by vkist-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/fdf_header.h"

void	get_lines(int fd, char *filename, t_data *data, t_map *map)
{
	int	i;

	i = 0;
	data->key.press = 0;
	data->key.travelx = 0;
	data->key.travely = 0;
	map->rows = count_lines(filename);
	data->lines = malloc(sizeof (char *) * (map->rows + 1));
	found_error ((void **)data->lines);
	while (i < map->rows)
		data->lines[i++] = ft_get_next_line(fd);
	data->lines[i] = NULL;
	i = 0;
	data->split = ft_split(data->lines[i], ' ');
	map->cols = ft_splitlen(data->split);
	ft_matrixfree((void **)data->split);
	data->dot = malloc(sizeof (t_dot *) * (map->rows + 1));
	map->diagonal = sqrt(pow(map->rows, 2) + pow(map->cols, 2));
	map->scalei = 0.5 * (WINDOW_HEIGHT / map->diagonal);
	map->scalej = 0.5 * (WINDOW_WIDTH / map->diagonal);
}
