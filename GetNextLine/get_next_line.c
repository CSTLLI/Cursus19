/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcastell <vcastell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 18:34:38 by vcastell          #+#    #+#             */
/*   Updated: 2021/06/09 11:34:34 by vcastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*join_free(char *arr, char *buf)
{
	char	*ret;
	size_t	len;

	if (!arr || !buf)
		return (NULL);
	len = ft_strlen(arr) + ft_strlen(buf);
	ret = ft_strnew(len);
	if (!ret)
		return (NULL);
	ft_strcpy(ret, arr);
	ft_strcat(ret, buf);
	free(arr);
	return (ret);
}

static int	add_line(char **arr, char **line)
{
	int		len;
	char	*tmp;

	len = 0;
	while ((*arr)[len] != '\n' && (*arr)[len] != '\0')
		len++;
	if (ft_strchr(*arr, '\n') != NULL)y
	{
		ft_strchr(*arr, '\n');
		*line = ft_strsub(*arr, 0, len);
		tmp = ft_strdup(ft_strchr(*arr, '\0') + 1);
		free(*arr);
		*arr = tmp;
		if ((*arr)[0] == '\0')
			ft_strdel(arr);
	}
	else
	{
		*line = ft_strdup(*arr);
		ft_strdel(arr);
	}
	return (1);
}

int	get_next_line(int fd, char **line)
{
	int			ret;
	static char	*arr[1024];
	char		buf[BUFF_SIZE + 1];

	if (fd < 0 || !line)
		return (-1);
	while ((read(fd, buf, BUFF_SIZE)) > 0)
	{
		ret = read(fd, buf, BUFF_SIZE);
		buf[ret] = '\0';
		if (arr[fd] == NULL)
			arr[fd] = ft_strdup(buf);
		else
			arr[fd] = join_free(arr[fd], buf);
		if (ft_strchr(arr[fd], '\n'))
			break ;
	}
	if (ret < 0)
		return (-1);
	else if (ret == 0 && arr[fd] == NULL)
		return (0);
	else
		return (add_line(&arr[fd], line));
}
