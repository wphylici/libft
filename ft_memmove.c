/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 19:50:01 by wphylici          #+#    #+#             */
/*   Updated: 2020/05/25 03:41:18 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*dst1;
	unsigned char	*src1;

	i = 0;
	dst1 = (unsigned char *)dst;
	src1 = (unsigned char *)src;
	if (dst1 == NULL && src1 == NULL)
		return (NULL);
	if (src1 <= dst1)
	{
		while (n-- > 0)
			dst1[n] = src1[n];
	}
	else
		ft_memcpy(dst1, src1, n);
	return (dst1);
}
