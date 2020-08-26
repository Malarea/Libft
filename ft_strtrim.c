/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emachrek <emachrek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 10:55:02 by emachrek          #+#    #+#             */
/*   Updated: 2020/08/20 23:40:39 by emachrek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	verif(char c, char const *str)
{
	while (*str)
	{
		if (c == *str)
			return (1);
		str++;
	}
	return (0);
}

char				*ft_strtrim(char const *s1, char const *set)
{
	int					i;
	char				*deb;
	char				*fin;
	char				*str;
	unsigned int		size;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && verif(s1[i], set))
		i++;
	deb = (char *)&s1[i];
	if ((i = ft_strlen(s1) - 1) != -1)
		while (i >= 0 && verif(s1[i], set))
			i--;
	fin = (char *)&s1[i];
	if (!*s1 || fin == deb)
		size = 2;
	else
		size = fin - deb + 2;
	if (!(str = malloc(sizeof(char) * size)))
		return (NULL);
	ft_strlcpy(str, deb, size);
	return (str);
}
