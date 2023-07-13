/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alucar <alucar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:01:54 by alucar            #+#    #+#             */
/*   Updated: 2023/07/13 10:21:29 by alucar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int	i;
	int	deger;
	int	sayi;

	i = 0;
	deger = 1;
	sayi = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			deger *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		sayi = sayi * 10 + str[i] - 48;
		i++;
	}
	return (sayi * deger);
}
