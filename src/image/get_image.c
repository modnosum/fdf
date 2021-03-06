/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_image.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 17:11:31 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/25 17:33:28 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <image.h>
#include <libft.h>
#include <mlx.h>

t_image					*get_image(void *mlx, int w, int h)
{
	t_image				*img;

	if ((img = (t_image*)ft_memalloc(sizeof(t_image))))
	{
		img->ip = mlx_new_image(mlx, w, h);
		img->id = mlx_get_data_addr(img->ip, &img->bp,
											&img->sl, &img->en);
		img->le = 0x11223344;
		img->le = (((unsigned char*)&img->le)[0] == 0x11) ? (1) : (0);
		img->w = w;
		img->h = h;
	}
	return (img);
}
