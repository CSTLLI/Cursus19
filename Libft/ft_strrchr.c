/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcastell <vcastell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 11:40:03 by vcastell          #+#    #+#             */
/*   Updated: 2021/05/19 21:23:56 by vcastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int				i;
	unsigned char	d;
	char			*str2;

	i = ft_strlen(str);
	str2 = (char *)str;
	d = (unsigned char)c;
	while (i >= 0)
	{
		if (str2[i] == d)
			return (str2 + i);
		i--;
	}
	return (NULL);
}
