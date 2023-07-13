/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alucar <alucar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:07:17 by alucar            #+#    #+#             */
/*   Updated: 2023/07/13 13:18:55 by alucar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
		i++;
	if (s1[i] == '\0')
	{
		str = ft_strdup("");
		if (!str)
			return (NULL);
		return (str);
	}
	len = ft_strlen(s1 + i);
	while (len > 0 && ft_strchr(set, s1[i + len - 1]))
		len--;
	str = ft_substr(s1, i, len);
	if (!str)
		return (NULL);
	return (str);
}
