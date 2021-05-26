/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcastell <vcastell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/05 14:42:53 by vcastell          #+#    #+#             */
/*   Updated: 2021/05/19 21:23:24 by vcastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t			i;
	unsigned char	d;
	unsigned char	*s;

	i = 0;
	s = (unsigned char *)str;
	d = (unsigned char)c;
	while (s[i])
	{
		if (s[i] == d)
			return ((char *)&s[i]);
		i++;
	}
	if (d == s[i])
		return ((char *)&s[i]);
	return (NULL);
}
