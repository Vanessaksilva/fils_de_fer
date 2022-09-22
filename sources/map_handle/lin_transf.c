/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lin_transf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkist-si <vkist-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 21:08:08 by vkist-si          #+#    #+#             */
/*   Updated: 2022/09/17 21:08:11 by vkist-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/fdf_header.h"

void	lin_transf(t_data *data, t_map *map, int i, int j)
{
	data->dot[i][j].y = ((WINDOW_HEIGHT / 2) - (map->cols * map->scalei));
	data->dot[i][j].y -= (data->dot[i][j].z);
	data->dot[i][j].y += (i * map->scalei);
	data->dot[i][j].y += (j * map->scalei);
	data->dot[i][j].x = ((WINDOW_WIDTH / 1.2) - (map->rows * map->scalej));
	data->dot[i][j].x -= (i * map->scalej);
	data->dot[i][j].x += (j * map->scalej);
}
