/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcastell <vcastell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 15:20:31 by vcastell          #+#    #+#             */
/*   Updated: 2021/04/07 16:52:24 by vcastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp (const char *str1, const char *str2, size_t length)
{
	size_t	i;

	i = 0;
	while (str1[i] == str2[i] && str1[i] && str2[i] && i < (length - 1))
		i++;
	if (length == 0)
		return (0);
	if (str1[i] == str2[i])
		return (0);
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
