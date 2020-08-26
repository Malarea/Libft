/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emachrek <emachrek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 03:11:24 by emachrek          #+#    #+#             */
/*   Updated: 2020/08/07 12:27:51 by emachrek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	size_t			i;

	ptr1 = (unsigned char*)s1;
	ptr2 = (unsigned char*)s2;
	i = 0;
	if (n == 0)
		return (0);
	while (++i < n && *ptr1 == *ptr2)
	{
		ptr1++;
		ptr2++;
	}
	return (*ptr1 - *ptr2);
}
