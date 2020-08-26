/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emachrek <emachrek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/20 16:49:43 by emachrek          #+#    #+#             */
/*   Updated: 2020/08/20 23:03:41 by emachrek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t i)
{
	char		*str;
	size_t		compt;

	compt = 0;
	if (!(str = ft_memalloc(i + 1)))
		return (NULL);
	while (compt < i)
		str[compt++] = '\0';
	return (str);
}
