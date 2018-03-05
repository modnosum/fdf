/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 15:56:48 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/27 14:28:10 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int						ft_strequ(const char *s1, const char *s2)
{
	if (s1 && s2)
		return (ft_strcmp(s1, s2) == 0);
	else
		return (0);
}