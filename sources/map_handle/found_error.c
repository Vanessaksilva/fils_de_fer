/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   found_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vkist-si <vkist-si@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 21:07:29 by vkist-si          #+#    #+#             */
/*   Updated: 2022/09/17 21:07:32 by vkist-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/fdf_header.h"

void	found_error(void **pointer)
{
	if (!pointer)
	{
		ft_putstr_fd("Something went wrong\n", 2);
		exit(1);
	}
}
