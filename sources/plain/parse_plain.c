/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_plain.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/19 17:11:50 by modnosum          #+#    #+#             */
/*   Updated: 2018/02/21 00:07:09 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <plain.h>

t_plain					*parse_plain(t_plain *pln, int fd)
{
	char				*line;
	int					rt;

	while ((rt = get_next_line(fd, &line)) > 0)
	{
		pln = parse_line(pln, line);
		ft_strdel(&line);
		if (pln == NULL)
			break ;
	}
	if (rt == 1)
		while (get_next_line(fd, &line) > 0)
			ft_strdel(&line);
	else if (rt == -1)
		del_plain(&pln, 1);
	return (pln);
}
