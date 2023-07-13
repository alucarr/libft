/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alucar <alucar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:03:33 by alucar            #+#    #+#             */
/*   Updated: 2023/07/12 11:19:17 by alucar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*conv_dst;
	const unsigned char	*conv_src;

	i = 0;
	conv_dst = (unsigned char *)dst;
	conv_src = (const unsigned char *)src;
	if (!dst && !src)
		return (NULL);
	if (dst > src)
	{
		while (len--)
		{
			conv_dst[len] = conv_src[len];
		}
	}
	else
	{
		while (i < len)
		{
			conv_dst[i] = conv_src[i];
			i++;
		}
	}
	return (dst);
}
