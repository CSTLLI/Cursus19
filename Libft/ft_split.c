/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcastell <vcastell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 11:49:31 by vcastell          #+#    #+#             */
/*   Updated: 2021/05/08 22:17:09 by vcastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_countchar(char const *s, char c)
{
	size_t	i;
	size_t	nbstrs;

	i = 0;
	nbstrs = 0;
	if (s[0] == '\0')
		return (0);
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c)
		{
			nbstrs++;
			while (s[i] && s[i] == c)
				i++;
			continue ;
		}
		i++;
	}
	if (s[i - 1] != c)
		nbstrs++;
	return (nbstrs);
}

static char	**ft_malloc_error(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

static void	ft_next_str(char **str_next, unsigned int *str_len, char c)
{
	size_t	i;

	*str_next += *str_len;
	*str_len = 0;
	i = 0;
	while (**str_next && **str_next == c)
		(*str_next)++;
	while ((*str_next)[i])
	{
		if ((*str_next)[i] == c)
			return ;
		(*str_len)++;
		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	unsigned int	i;
	unsigned int	str_len;
	char			**str;
	char			*str_next;

	if (!s)
		return (NULL);
	str = (char **)malloc(sizeof(char *) * ft_countchar(s, c) + 1);
	if (!str)
		return (NULL);
	i = 0;
	str_len = 0;
	str_next = (char *)s;
	while (i < ft_countchar(s, c))
	{
		ft_next_str(&str_next, &str_len, c);
		str[i] = (char *)malloc(sizeof(char) * (str_len + 1));
		if (!str[i])
			return (ft_malloc_error(str));
		ft_strlcpy(str[i], str_next, str_len + 1);
		i++;
	}
	str[i] = NULL;
	return (str);
}
