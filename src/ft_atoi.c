/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnowpea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 16:43:50 by esnowpea          #+#    #+#             */
/*   Updated: 2020/07/27 16:10:38 by esnowpea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		skip_spaces(const char *str)
{
	int		i;

	i = 0;
	while ((str[i] == '\n') || (str[i] == '\t') || (str[i] == '\v') || \
	(str[i] == ' ') || (str[i] == '\f') || (str[i] == '\r'))
		++i;
	return (i);
}

int				ft_atoi(const char *str)
{
	int		i;
	int		n;
	int		sign;

	n = 0;
	sign = 1;
	i = skip_spaces(str);
	if (str[i] == '+' || str[i] == '-')
	{
		sign = (str[i] == '+') ? 1 : -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + (str[i] - '0');
		++i;
	}
	n = sign * n;
	return (n);
}