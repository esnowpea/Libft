/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnowpea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 13:32:50 by esnowpea          #+#    #+#             */
/*   Updated: 2019/10/15 21:33:20 by esnowpea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char *c;

	c = (char*)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (c == NULL)
		return (0);
	else
		return (ft_strcpy(c, src));
}
