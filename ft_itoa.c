/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/20 07:12:56 by wphylici          #+#    #+#             */
/*   Updated: 2020/05/25 03:35:33 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_digit_len(int n1)
{
	int res;

	res = 0;
	if (n1 < 0 || n1 == -0)
		res++;
	while (n1 != 0)
	{
		n1 = n1 / 10;
		res++;
	}
	return (res);
}

char		*ft_itoa(int n)
{
	int		neg;
	int		len;
	char	*res;

	neg = 0;
	len = ft_digit_len(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	res = (char *)malloc((len + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	if (n < 0)
	{
		n = n * -1;
		neg = 1;
	}
	res[len] = '\0';
	while (len--)
	{
		res[len] = n % 10 + '0';
		n = n / 10;
		if (neg == 1)
			res[0] = '-';
	}
	return (res);
}
