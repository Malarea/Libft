/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emachrek <emachrek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 13:04:41 by emachrek          #+#    #+#             */
/*   Updated: 2020/08/20 23:04:54 by emachrek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*res;

	res = (char *)s;
	i = ft_strlen(s);
	if (s[i] == c)
		return (res + i);
	while (i >= 0)
	{
		if (s[i] == c)
			return (res + i);
		i--;
	}
	return (NULL);
}
