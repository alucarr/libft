/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alucar <alucar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:06:10 by alucar            #+#    #+#             */
/*   Updated: 2023/07/13 10:28:40 by alucar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		uzunluk;
	char	*string;

	i = 0;
	uzunluk = ft_strlen(s1);
	string = (char *) malloc(sizeof(*string) * (uzunluk + 1));
	if (!string)
		return (NULL);
	while (i < uzunluk)
	{
		string[i] = s1[i];
		i++;
	}
	string[i] = '\0';
	return (string);
}
