/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 20:12:20 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/22 02:58:29 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENV_H
# define ENV_H

# include <image.h>
# include <plain.h>
# include <mouse.h>
# include <keyboard.h>

# define WIN_MIN_WIDTH 350
# define WIN_MAX_WIDTH 1200
# define WIN_MIN_HEIGHT 350
# define WIN_MAX_HEIGHT 900

# define WIN_DEFAULT_WIDTH 500
# define WIN_DEFAULT_HEIGHT 400

typedef struct			s_env
{
	void				*mlx;
	void				*win;
	t_plain				*pln;
	t_image				*img;
	t_mouse				*ms;
	t_keyboard			*kb;
	char				*title;
	int					w;
	int					h;
}						t_env;

t_env					*init_env(t_plain *pln, char *name);
void					del_env(t_env **ep);
void					print_env(t_env *env);

int						parse_args(t_env *env, int ac, char **av);
void					setup_window(t_env *env);
void					init_hooks(t_env *env);
void					start_env(t_env *env);

void					update_env(t_env *env);
void					draw_string(t_env *env, int x, int y, char *str);

#endif
