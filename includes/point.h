/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   point.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 17:17:46 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/19 17:18:00 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H

# include <libft.h>

typedef struct			s_point
{
	float				x;
	float				y;
	float				z;
	int					color;
}						t_point;

t_list					*get_point_el(float x, float y, float z, int color);

t_point					*get_point(float x, float y, float z, int color);
void					delete_point(t_point **pp);

void					delete_point_el(void *point_el, size_t size);
void					print_point_el(t_list *point_el);

#endif
