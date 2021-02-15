/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 00:15:58 by wphylici          #+#    #+#             */
/*   Updated: 2021/02/02 03:00:32 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	c;
	size_t	len_s;
	char	*res;

	i = 0;
	c = 0;
	if (s == NULL)
		return (NULL);
	res = (char *)malloc((len + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	len_s = ft_strlen((char *)s);
	if (start > len_s)
		return (ft_strdup(""));
	while (s[i] != '\0')
	{
		if (i >= start && c < len)
			res[c++] = s[i];
		i++;
	}
	res[c] = '\0';
	return (res);
}
