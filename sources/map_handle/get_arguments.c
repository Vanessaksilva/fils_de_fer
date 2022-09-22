/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_arguments.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkist-si <vkist-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 21:07:44 by vkist-si          #+#    #+#             */
/*   Updated: 2022/09/17 21:07:47 by vkist-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/fdf_header.h"

void	get_arguments(t_data *data, int i)
{
	int		j;
	char	**split2;

	j = 0;
	while (j < data->map.cols)
	{
		if (ft_strchr(data->split[j], ','))
		{
			split2 = ft_split(data->split[j], ',');
			data->dot[i][j].z = ft_atoi(split2[0]);
			lin_transf(data, &data->map, i, j);
			data->dot[i][j].color = ft_htoi(split2[1]);
			ft_matrixfree((void **)split2);
		}
		else
		{
			data->dot[i][j].z = ft_atoi(data->split[j]);
			lin_transf(data, &data->map, i, j);
			data->dot[i][j].color = WHITE_PIXEL;
		}
		j++;
	}
}
