/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/16 22:19:26 by wphylici          #+#    #+#             */
/*   Updated: 2020/05/23 18:54:53 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int			i;
	long long	res;
	long long	neg;

	i = 0;
	res = 0;
	neg = 1;
	while (str[i] == '\n' || str[i] == '\r' || str[i] == '\v' || str[i] == '\t'
	|| str[i] == '\f' || str[i] == ' ')
		i++;
	if (str[i] == '-')
		neg = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while ((str[i] >= '0') && (str[i] <= '9'))
		res = (res * 10) + (str[i++] - '0');
	if (i >= 19)
	{
		if (neg == 1)
			return (-1);
		else if (i > 19)
			return (0);
	}
	return (res * neg);
}
