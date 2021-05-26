/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcastell <vcastell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 17:27:53 by vcastell          #+#    #+#             */
/*   Updated: 2021/04/14 12:33:57 by vcastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		size;
	int		i;
	char	*s;

	size = ft_strlen(src);
	s = (char *)malloc(size + 1);
	if (!s)
		return (NULL);
	i = 0;
	while (i < size && src[i])
	{
		s[i] = src[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
