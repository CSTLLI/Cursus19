/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcastell <vcastell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 12:14:37 by vcastell          #+#    #+#             */
/*   Updated: 2021/05/14 16:36:50 by vcastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(unsigned char *)dest = *(unsigned char *)src;
		if (*(unsigned char *)src == (unsigned char)c)
		{
			dest++;
			return (dest);
		}
		dest++;
		src++;
		i++;
	}
	return (NULL);
}
