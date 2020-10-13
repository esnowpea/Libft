/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bilstlength.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnowpea <esnowpea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 15:45:22 by esnowpea          #+#    #+#             */
/*   Updated: 2020/10/13 15:45:22 by esnowpea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_bilstlength(t_bilist *alst)
{
	t_bilist	*tmp;
	int			i;

	i = 0;
	if (alst)
	{
		tmp = alst;
		while (tmp->prev)
			tmp = tmp->prev;
		while (tmp)
		{
			i++;
			tmp = tmp->next;
		}
	}
	return (i);
}