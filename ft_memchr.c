/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emachrek <emachrek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 01:52:11 by emachrek          #+#    #+#             */
/*   Updated: 2020/08/20 21:27:38 by emachrek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*sbis;
	size_t			i;

	i = 0;
	sbis = (unsigned char *)s;
	while (n--)
	{
		if (sbis[i] == (unsigned char)c)
			return (sbis + i);
		i++;
	}
	return (NULL);
}
