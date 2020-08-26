/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emachrek <emachrek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/03 08:20:05 by emachrek          #+#    #+#             */
/*   Updated: 2020/08/20 21:33:41 by emachrek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest2;
	const unsigned char	*src2;
	size_t				i;

	dest2 = (unsigned char *)dest;
	src2 = (unsigned char *)src;
	i = 0;
	if (dest2 > src2)
		while (++i <= n)
			dest2[n - i] = src2[n - i];
	else
		while (n-- > 0)
			*(dest2++) = *(src2++);
	return (dest);
}
