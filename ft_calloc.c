/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alucar <alucar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:02:14 by alucar            #+#    #+#             */
/*   Updated: 2023/07/13 13:20:36 by alucar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*yer_ayir;

	yer_ayir = malloc(count * size);
	if (yer_ayir == NULL)
		return (yer_ayir);
	ft_bzero (yer_ayir, count * size);
	return (yer_ayir);
}
