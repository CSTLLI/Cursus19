/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcastell <vcastell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 13:47:38 by vcastell          #+#    #+#             */
/*   Updated: 2021/05/14 16:12:00 by vcastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_char_find(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	depart;
	size_t	end;
	size_t	i ;
	char	*str;

	if (!s1)
		return (NULL);
	depart = 0;
	while (s1[depart] && ft_char_find(set, s1[depart]))
		depart++;
	end = ft_strlen(s1);
	while (end > depart && ft_char_find(set, s1[end - 1]))
		end--;
	str = (char *)malloc((end - depart) + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (depart < end)
		str[i++] = s1[depart++];
	str[i] = '\0';
	return (str);
}
