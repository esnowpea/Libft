/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnowpea <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/11 18:24:00 by esnowpea          #+#    #+#             */
/*   Updated: 2019/09/11 18:24:42 by esnowpea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;

	if (s && f)
	{
		str = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
		if (!str)
			return (0);
		i = 0;
		while (s[i])
		{
			str[i] = (*f)((unsigned int)i, s[i]);
			i++;
		}
		str[i] = '\0';
		return (str);
	}
	return (0);
}
