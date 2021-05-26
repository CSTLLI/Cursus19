/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcastell <vcastell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/02 13:54:53 by vcastell          #+#    #+#             */
/*   Updated: 2021/05/14 16:37:07 by vcastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *pointer, int value, size_t count)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char *)pointer;
	while (i < count)
	{
		str[i] = (unsigned char)value;
		i++;
	}
	return (str);
}
