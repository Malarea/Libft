/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emachrek <emachrek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 15:00:33 by emachrek          #+#    #+#             */
/*   Updated: 2020/08/20 22:48:07 by emachrek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;
	char	*res;

	i = 0;
	str = NULL;
	res = NULL;
	if (s || f)
	{
		if (!(str = ft_strnew(ft_strlen(s))))
			return (NULL);
		res = str;
		if (s && f)
			while (s[i])
			{
				*str++ = f(i, (char)s[i]);
				i++;
			}
	}
	return (res);
}
