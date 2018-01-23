/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/20 13:32:25 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/23 15:05:00 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"
#include <stdio.h>

int						main(int ac, char **av)
{
	if (ac != 2)
		print_usage("./fdf", " <filename>");
	else
		return (fdf(av[1]));
	return (1);
}
