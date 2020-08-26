/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emachrek <emachrek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/04 06:07:42 by emachrek          #+#    #+#             */
/*   Updated: 2020/08/20 22:13:32 by emachrek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	int		i;

	i = -1;
	if (!(str = malloc(sizeof(char) * ft_strlen(s) + 1)))
		return (NULL);
	while (s[++i])
		str[i] = s[i];
	str[i] = '\0';
	return (str);
}
