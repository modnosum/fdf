/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_image.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 17:11:31 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/19 17:15:35 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <image.h>
#include <libft.h>
#include <mlx.h>

t_image					*get_image(void *mlx, int width, int height)
{
	t_image				*i;

	if ((i = (t_image*)ft_memalloc(sizeof(t_image))))
	{
		i->width = width;
		i->height = height;
		i->image = mlx_new_image(mlx, width, height);
		i->image_data = mlx_get_data_addr(i->image, &i->bpp,
											&i->line_size, &i->endian);
	}
	return (i);
}
