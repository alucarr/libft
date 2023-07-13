/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alucar <alucar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:03:26 by alucar            #+#    #+#             */
/*   Updated: 2023/07/12 11:19:02 by alucar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*conv_dst;
	const unsigned char	*conv_src;

	i = 0;
	conv_dst = (unsigned char *) dst;
	conv_src = (const unsigned char *) src;
	if (!dst && !src)
		return (NULL);
	while (i < n)
	{
		conv_dst[i] = conv_src[i];
		i++;
	}
	return (dst);
}
