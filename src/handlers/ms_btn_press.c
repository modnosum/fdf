/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ms_btn_press.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 03:43:35 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/23 11:10:05 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <handlers.h>

int						ms_btn_press(int btn, int x, int y, t_env *env)
{
	set_vec2i(env->ms->pv, x, y);
	env->ms->btn = btn;
	env->ms->pressed = 1;
	mouse_handler(env, MOUSE_BUTTON_PRESS);
	return (0);
}
