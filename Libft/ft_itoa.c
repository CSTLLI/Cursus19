/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcastell <vcastell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 20:06:35 by vcastell          #+#    #+#             */
/*   Updated: 2021/05/14 15:30:40 by vcastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	countsize(long nb)
{
	int	i;

	i = 0;
	if (nb <= 0)
	{
		nb = -nb;
		i++;
	}
	while (nb > 0)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long		nb;
	int			i;
	char		*str;

	nb = n;
	i = countsize(nb);
	str = (char *)malloc(sizeof(char) * i + 1);
	if (!str)
		return (NULL);
	str[i--] = '\0';
	if (nb == 0)
		str[0] = '0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		str[i] = 48 + (nb % 10);
		nb /= 10;
		i--;
	}
	return (str);
}
