/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emachrek <emachrek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 17:25:36 by emachrek          #+#    #+#             */
/*   Updated: 2020/08/20 23:06:06 by emachrek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	char		swp;
	size_t		i;

	i = 0;
	while (i < ft_strlen(str) / 2)
	{
		swp = str[i];
		str[i] = str[ft_strlen(str) - 1 - i];
		str[ft_strlen(str) - 1 - i] = swp;
		i++;
	}
	return (str);
}
