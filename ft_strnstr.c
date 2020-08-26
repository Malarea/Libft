/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emachrek <emachrek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 17:51:56 by emachrek          #+#    #+#             */
/*   Updated: 2020/08/20 23:04:07 by emachrek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		u;
	size_t		i;
	char		*res;

	i = 0;
	u = 0;
	res = ft_strdup(haystack);
	if (!*needle)
		return (res);
	while (len > i)
	{
		u = 0;
		while (res[i] == needle[u])
		{
			u++;
			i++;
			if ((u == ft_strlen((char *)needle)) && (i < len))
				return (res + (i - u));
		}
		i++;
	}
	return (NULL);
}
