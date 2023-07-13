/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alucar <alucar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:07:24 by alucar            #+#    #+#             */
/*   Updated: 2023/07/13 13:18:51 by alucar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	substr_len;
	char	*str;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	substr_len = s_len - start;
	if (len < substr_len)
		substr_len = len;
	str = (char *)malloc(sizeof(char) * (substr_len + 1));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s + start, substr_len + 1);
	return (str);
}
