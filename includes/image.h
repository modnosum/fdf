/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   image.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 17:18:14 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/21 00:01:15 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMAGE_H
# define IMAGE_H

# include <vector.h>
# include <plain.h>

typedef struct			s_image
{
	void				*imgp;
	char				*imgd;
	int					bpp;
	int					sl;
	int					end;
	int					lend;
	int					w;
	int					h;
}						t_image;

t_image					*get_image(void *mlx, int w, int h);
void					del_image(void *mlx, t_image **ip);

void					draw_line(t_image *img, t_vec2 *v1, t_vec2 *v2);
void					put_pixel(t_image *img, t_vec2 *v);
unsigned int			map_color(unsigned int c1, unsigned int c2, float ratio);

void					put_plain_to_image(t_plain *pln, t_image *img);

#endif
