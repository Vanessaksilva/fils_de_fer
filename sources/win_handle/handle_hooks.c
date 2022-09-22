/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_hooks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkist-si <vkist-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 21:06:12 by vkist-si          #+#    #+#             */
/*   Updated: 2022/09/17 21:06:16 by vkist-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/fdf_header.h"

void	handle_hooks(t_data *data)
{
	mlx_loop_hook(data->mlx_ptr, &draw_image, data);
	mlx_hook(data->win_ptr, 17, 0, &handle_x_button, data);
	mlx_key_hook(data->win_ptr, &handle_keypress, data);
}
