/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allombar <allombar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 14:50:53 by allombar          #+#    #+#             */
/*   Updated: 2020/01/26 01:24:58 by allombar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_atoi(const char *str)
{
	int		i;
	int		multiplicator;
	long	result;

	i = 0;
	result = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' ||
			str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	multiplicator = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			multiplicator = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - 48) * multiplicator;
		if (result * multiplicator < 0)
			return (multiplicator == 1 ? -1 : 0);
		i++;
	}
	return ((int)result);
}
