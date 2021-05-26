/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcastell <vcastell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 11:01:02 by vcastell          #+#    #+#             */
/*   Updated: 2021/04/07 17:19:57 by vcastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t sizedest)
{
	size_t	i;

	if (!src && !dest)
		return (0);
	i = 0;
	if (sizedest == 0)
	{
		while (src[i])
			i++;
		return (i);
	}
	while (src[i] && i < (sizedest - 1))
	{
		dest[i] = src[i];
		i++;
	}
	if (i < sizedest)
		dest[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}
