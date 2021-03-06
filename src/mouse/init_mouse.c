/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_mouse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 17:11:11 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/22 17:24:13 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <mouse.h>
#include <libft.h>

t_mouse					*init_mouse(void)
{
	t_mouse				*ms;

	if ((ms = (t_mouse*)ft_memalloc(sizeof(t_mouse))))
	{
		ms->pv = get_vec2i(0, 0);
		ms->rv = get_vec2i(0, 0);
		ms->cv = get_vec2i(0, 0);
		ms->btn = 0;
		ms->pressed = 0;
	}
	return (ms);
}
