/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcastell <vcastell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 18:34:33 by vcastell          #+#    #+#             */
/*   Updated: 2021/07/19 14:29:56 by vcastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

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

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	str = (char *)malloc((ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
		str[j++] = s1[i++];
	i = 0;
	while (s2[i])
		str[j++] = s2[i++];
	str[j] = '\0';
	return (str);
}

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
