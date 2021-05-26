/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcastell <vcastell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/09 15:12:34 by vcastell          #+#    #+#             */
/*   Updated: 2021/04/13 14:11:28 by vcastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t t)
{
	unsigned char	*s;

	s = malloc(t * nmemb);
	if (!s)
		return (NULL);
	ft_memset(s, 0, nmemb * t);
	return (s);
}
