/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 19:35:00 by wphylici          #+#    #+#             */
/*   Updated: 2020/05/23 02:52:45 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t	i;
	size_t	c;

	i = 0;
	if (*little == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < n)
	{
		c = 0;
		while (big[i + c] == little[c] && (i + c) < n)
		{
			if (little[c + 1] == '\0')
				return ((char *)big + i);
			c++;
		}
		i++;
	}
	return (NULL);
}
