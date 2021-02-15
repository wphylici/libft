/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 18:54:20 by wphylici          #+#    #+#             */
/*   Updated: 2020/05/16 06:29:40 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	c;
	size_t	size_d;
	size_t	size_s;

	i = 0;
	c = 0;
	size_d = ft_strlen(dst);
	size_s = ft_strlen((char *)src);
	if (dstsize <= size_d)
		return (size_s + dstsize);
	while (dst[i] != '\0')
		i++;
	while (i < (dstsize - 1) && src[c] != '\0')
	{
		dst[i] = src[c];
		i++;
		c++;
	}
	dst[i] = '\0';
	return (size_d + size_s);
}
