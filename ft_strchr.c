/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emachrek <emachrek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 12:52:39 by emachrek          #+#    #+#             */
/*   Updated: 2020/08/20 22:10:31 by emachrek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*res;

	res = (char *)s;
	i = -1;
	while (s[++i])
	{
		if (s[i] == (unsigned char)c)
			return (res + i);
	}
	if (s[i] == (unsigned char)c)
		return (res + i);
	return (NULL);
}
