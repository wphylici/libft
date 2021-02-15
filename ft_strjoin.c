/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 18:13:38 by wphylici          #+#    #+#             */
/*   Updated: 2020/05/25 03:45:04 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		c;
	int		len;
	char	*res;

	i = 0;
	c = 0;
	if (s1 == NULL || s2 == NULL)
		return (0);
	len = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	res = (char *)malloc((len + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		res[i] = s1[i];
		i++;
	}
	while (s2[c] != '\0')
		res[i++] = s2[c++];
	res[i] = '\0';
	return (res);
}
