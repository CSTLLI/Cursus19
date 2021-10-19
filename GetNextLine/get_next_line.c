/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcastell <vcastell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 18:34:38 by vcastell          #+#    #+#             */
/*   Updated: 2021/07/19 15:21:28 by vcastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char		*ft_split_line(int ret, char **save);
static void		ft_free_str(char **str);

char	*get_next_line(int fd)
{
	static char	*save;
	char		*buffer;
	char		*tmp;
	int			ret;

	buffer = (char *)malloc(BUFFER_SIZE + 1);
	ret = read(fd, buffer, BUFFER_SIZE);
	while (ret > 0)
	{
		buffer[ret] = '\0';
		if (!save)
			save = ft_strdup(buffer);
		else
		{
			tmp = ft_strjoin(save, buffer);
			free(save);
			save = tmp;
		}
		if (ft_strchr(save, '\n'))
			break ;
		ret = read(fd, buffer, BUFFER_SIZE);
	}
	free(buffer);
	return (ft_split_line(ret, &save));
}

static char	*ft_split_line(int ret, char **save)
{
	char	*tmp;
	int		i;

	if (ret < 0 || BUFFER_SIZE < 1)
		return (NULL);
	else if (ret == 0 && *save == 0)
	{
		ft_free_str(save);
		return (NULL);
	}
	i = 0;
	while ((*save)[i] != '\n' && (*save)[i])
		i++;
	if (ft_strchr (*save, '\n'))
	{
		tmp = ft_strdup(*save + i + 1);
		free(*save);
		*save = tmp;
		return (NULL);
	}
	ft_free_str(save);
	return (NULL);
}

static void	ft_free_str(char **str)
{
	if (*str && str)
	{
		free(*str);
		*str = NULL;
	}
}
