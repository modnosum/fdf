/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_env.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 20:43:53 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/22 04:32:06 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <env.h>
#include <mlx.h>
#include <libft.h>

t_env					*init_env(t_plain *pln, char *name)
{
	t_env				*env;
	char				*title;
	char				*temp;

	if ((env = (t_env*)ft_memalloc(sizeof(t_env))))
	{
		env->mlx = NULL;
		env->win = NULL;
		temp = ft_strjoin(name, " : ");
		title = ft_strjoin(temp, name);
		ft_strdel(&temp);
		env->pln = pln;
		env->img = NULL;
		env->ms = init_mouse();
		env->kb = init_keyboard();
		env->title = title;
		env->w = 0;
		env->h = 0;
	}
	return (env);
}
