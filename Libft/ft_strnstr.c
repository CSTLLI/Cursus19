/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcastell <vcastell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 23:30:23 by vcastell          #+#    #+#             */
/*   Updated: 2021/05/14 16:08:55 by vcastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	c;
	size_t	n_len;
	char	*b;

	i = 0;
	b = (char *)big;
	n_len = ft_strlen(little);
	if (n_len == 0 || big == little)
		return (b);
	while (b[i] != '\0' && i < len)
	{
		c = 0;
		while (b[i + c] != '\0' && little[c] != '\0'
			&& b[i + c] == little[c] && i + c < len)
			c++;
		if (c == n_len)
			return (b + i);
		i++;
	}
	return (0);
}
