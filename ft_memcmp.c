/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alucar <alucar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:03:21 by alucar            #+#    #+#             */
/*   Updated: 2023/07/13 10:23:11 by alucar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*conv_s1;
	unsigned char	*conv_s2;

	i = 0;
	conv_s1 = (unsigned char *)s1;
	conv_s2 = (unsigned char *)s2;
	while (i < n)
	{
		if (conv_s1[i] != conv_s2[i])
		{
			return ((unsigned char)conv_s1[i] - (unsigned char)conv_s2[i]);
		}
		i++;
	}
	return (0);
}
