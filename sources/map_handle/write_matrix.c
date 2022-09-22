/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_matrix.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkist-si <vkist-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 21:08:17 by vkist-si          #+#    #+#             */
/*   Updated: 2022/09/17 21:08:20 by vkist-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/fdf_header.h"

void	write_matrix(t_data *data)
{
	int	i;

	i = 0;
	while (data->lines[i])
	{
		data->dot[i] = malloc(sizeof (t_dot) * data->map.cols);
		found_error((void **) &data->dot);
		data->split = ft_split(data->lines[i], ' ');
		get_arguments(data, i++);
		ft_matrixfree((void **)data->split);
	}
	data->dot[i] = NULL;
	ft_matrixfree((void **)data->lines);
}
