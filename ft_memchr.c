/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alucar <alucar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:03:14 by alucar            #+#    #+#             */
/*   Updated: 2023/07/13 10:23:06 by alucar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*conv_s;

	i = 0;
	conv_s = (unsigned char *) s;
	while (i < n)
	{
		if (conv_s[i] == (unsigned char) c)
			return ((unsigned char *) &conv_s[i]);
		i++;
	}
	return (NULL);
}
