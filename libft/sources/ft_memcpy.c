/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 11:53:59 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/27 14:28:28 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void					*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*ptr1;
	unsigned char		*ptr2;

	ptr1 = (unsigned char*)dst;
	ptr2 = (unsigned char*)src;
	while (n--)
		*ptr1++ = *ptr2++;
	return (dst);
}
