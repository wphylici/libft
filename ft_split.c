/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wphylici <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 13:48:34 by wphylici          #+#    #+#             */
/*   Updated: 2021/02/02 03:23:38 by wphylici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_counter_string(char const *s, char c)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	if (*s == '\0')
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			while (s[i] != '\0' && s[i] != c)
				i++;
			result++;
		}
	}
	return (result);
}

static char		*ft_make_string(char const *s, char c)
{
	int		i;
	int		n;
	char	*str;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	str = (char*)malloc((i + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	n = 0;
	while (s[n] != c && s[n] != '\0')
	{
		str[n] = s[n];
		n++;
	}
	str[n] = '\0';
	return (str);
}

static void		*ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		free(str[i++]);
	if (str)
		free(str);
	return (NULL);
}

char			**ft_split(char const *s, char c)
{
	int		i;
	int		i_res;
	char	**res;

	i = 0;
	i_res = 0;
	if (s == NULL)
		return (NULL);
	res = (char**)malloc((ft_counter_string(s, c) + 1) * sizeof(char*));
	if (res == NULL)
		return (NULL);
	while (s[i] != '\0' && i_res < ft_counter_string(s, c))
	{
		while (s[i] == c)
			i++;
		if (!(res[i_res] = ft_make_string(s + i, c)))
			return ((char**)ft_free(res));
		while (s[i] != c && s[i] != '\0')
			i++;
		i_res++;
	}
	res[i_res] = NULL;
	return (res);
}
