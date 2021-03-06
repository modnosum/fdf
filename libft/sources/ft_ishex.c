/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ishex.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 18:13:48 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/27 14:28:47 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int						ft_ishex(int c)
{
	return (ft_isdigit(c) || (c >= 'A' && c <= 'F') ||
			(c >= 'a' && c <= 'f'));
}
