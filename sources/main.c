/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 17:10:37 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/21 00:23:48 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <env.h>
#include <stdio.h>
#include <errno.h>

int						main(int ac, char **av)
{
	t_plain				*pln;
	t_env				*env;
	
	if (ac == 2)
	{
		pln = get_plain_from_file(av[1]);
		if (pln == NULL)
		{
			perror("fdf");
			return (2);
		}
		env = init_env(pln);
		if (env == NULL)
		{
			del_plain(&pln, 0);
			perror("fdf");
			return (3);
		}
		start_env(env);
		return (0);
	}
	ft_putendl("usage: fdf map_file");
	return (1);
}
