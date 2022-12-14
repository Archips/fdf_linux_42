/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keys_utils_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: athirion <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 14:10:38 by athirion          #+#    #+#             */
/*   Updated: 2022/01/18 14:52:46 by athirion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

void	ft_offset(int key, t_data *data)
{
	if (key == S)
		data->y_offset += 10;
	else if (key == W)
		data->y_offset -= 10;
	else if (key == A)
		data->x_offset -= 10;
	else if (key == D)
		data->x_offset += 10;
	mlx_destroy_image(data->mlx_ptr, data->img_ptr);
	ft_draw_map(data);
	ft_init_menu(data);
}

void	ft_altitude(int key, t_data *data)
{
	if (key == 44)
		data->altitude -= 0.1;
	else if (key == 46)
		data->altitude += 0.1;
	mlx_destroy_image(data->mlx_ptr, data->img_ptr);
	ft_draw_map(data);
	ft_init_menu(data);
}

void	ft_scale(int key, t_data *data)
{
	if (key == 45)
	{
		data->scale -= 1;
		if (data->scale <= 0)
			data->scale = 0;
	}
	if (key == 61)
		data->scale += 1;
	mlx_destroy_image(data->mlx_ptr, data->img_ptr);
	ft_draw_map(data);
	ft_init_menu(data);
}

void	ft_rotate(int key, t_data *data)
{
	if (key == 65362)
		data->alpha += 0.05;
	if (key == 65364)
		data->alpha -= 0.05;
	if (key == 65361)
		data->beta -= 0.05;
	if (key == 65363)
		data->beta += 0.05;
	if (key == 59)
		data->gamma -= 0.05;
	if (key == 39)
		data->gamma += 0.05;
	mlx_destroy_image(data->mlx_ptr, data->img_ptr);
	ft_draw_map(data);
	ft_init_menu(data);
}

void	ft_change_view(t_data *data)
{
	data->iso = (data->iso == 1) * 0 + (data->iso == 0) * 1;
	mlx_destroy_image(data->mlx_ptr, data->img_ptr);
	ft_draw_map(data);
	ft_init_menu(data);
}
