/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alucar <alucar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:07:12 by alucar            #+#    #+#             */
/*   Updated: 2023/07/13 13:18:56 by alucar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*obj;

	i = 0;
	obj = NULL;
	while (s[i])
	{
		if (s[i] == (char)c)
			obj = (char *)&s[i];
		i++;
	}
	if (s[i] == (char)c)
		obj = (char *)&s[i];
	return (obj);
}
