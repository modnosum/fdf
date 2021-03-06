/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_color.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 17:11:39 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/28 16:24:32 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <plain.h>
#include <libft.h>

int						parse_color(char *word, int color)
{
	while (*word && *word != ' ')
	{
		if (*word == ',')
			break ;
		word++;
	}
	if (*word == ',')
		return (ft_atoi(word + 1));
	return (color);
}
