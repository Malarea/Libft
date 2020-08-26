/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emachrek <emachrek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 10:01:29 by emachrek          #+#    #+#             */
/*   Updated: 2020/05/17 12:19:17 by emachrek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char *const s, unsigned int start, size_t len)
{
	int		i;
	char	*str;

	i = 0;
	if (!(str = malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (len)
	{
		str[i] = s[start];
		i++;
		start++;
		len--;
	}
	str[i] = '\0';
	return (str);
}
