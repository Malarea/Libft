/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emachrek <emachrek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 03:50:39 by emachrek          #+#    #+#             */
/*   Updated: 2020/08/20 21:11:20 by emachrek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*s;

	if (!(s = malloc(sizeof(size) * count)))
		return (NULL);
	ft_memset(s, 0, count);
	return ((void*)s);
}
