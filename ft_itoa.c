/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emachrek <emachrek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 16:29:01 by emachrek          #+#    #+#             */
/*   Updated: 2020/08/17 15:49:35 by emachrek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_exceptions(int nbr)
{
	if (nbr == 0)
		return (ft_strdup("0"));
	else
		return (ft_strdup("-2147483648"));
}

char	*ft_itoa(int nbr)
{
	char	*str;
	int		i;
	int		neg;

	neg = 0;
	i = 0;
	if (nbr == -2147483648 || nbr == 0)
		return (ft_exceptions(nbr));
	if (!((str = malloc(sizeof(char) * 12))))
		return (NULL);
	if (nbr < 0)
	{
		neg = 1;
		nbr *= -1;
	}
	while (nbr != 0)
	{
		str[i++] = (nbr % 10) + '0';
		nbr /= 10;
	}
	if (neg == 1)
		str[i] = '-';
	return (ft_strrev(str));
}
