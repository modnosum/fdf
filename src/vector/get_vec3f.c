/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_vec3f.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 03:24:10 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/28 19:14:27 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector.h>
#include <libft.h>

t_vec3f					*get_vec3f(float x, float y, float z, int v)
{
	t_vec3f				*p;

	if ((p = (t_vec3f*)ft_memalloc(sizeof(t_vec3f))))
	{
		p->x = x;
		p->y = y;
		p->z = z;
		p->v = v;
	}
	return (p);
}
