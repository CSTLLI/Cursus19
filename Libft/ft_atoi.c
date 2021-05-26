/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcastell <vcastell@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 17:33:32 by vcastell          #+#    #+#             */
/*   Updated: 2021/05/14 15:17:37 by vcastell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int					b;
	int					i;
	unsigned long long	result;

	i = 0;
	result = 0;
	while (*str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == ' ' || *str == '\r')
		str++;
	if (*str == '-')
		b = -1;
	else
		b = 1;
	if (*str == '-' || *str == '+' || *str == '0')
		str++;
	while (str[i] >= '0' && str[i] <= '9')
		result = result * 10 + (str[i++] - '0');
	if (i > 19 || result >= 9223372036854775808ULL)
	{
		if (b == 1)
			return (-1);
		else
			return (0);
	}
	return (result * b);
}
