/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcastell <vcastell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 14:31:50 by vcastell          #+#    #+#             */
/*   Updated: 2021/05/19 21:40:51 by vcastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*copy;
	size_t		len_copy;
	size_t		iter;

	len_copy = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s) > start)
		len_copy = (ft_strlen(s) - start);
	if (len < len_copy && ft_strlen(s) > start)
		len_copy = len;
	len_copy++;
	copy = malloc(len_copy * (sizeof(char)));
	if (!(copy))
		return (NULL);
	iter = 0;
	while (len_copy > 1 && s[start] && len > 0)
	{
		copy[iter] = s[start];
		iter++;
		start++;
		len--;
	}
	copy[iter] = '\0';
	return (copy);
}