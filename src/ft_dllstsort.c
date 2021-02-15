/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dllstsort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnowpea <esnowpea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/04 15:29:50 by esnowpea          #+#    #+#             */
/*   Updated: 2020/09/04 16:28:05 by esnowpea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dllstsort(t_dllist **alst, int (*cmp)(void*, void*))
{
	t_dllist	*tmp;

	if (alst && *alst)
	{
		tmp = *alst;
		while (tmp->prev)
			tmp = tmp->prev;
		while (tmp->next)
		{
			if (cmp(tmp->content, tmp->next->content))
			{
				ft_dllstswap(tmp, tmp->next);
				while (tmp->prev)
					tmp = tmp->prev;
				continue;
			}
			tmp = tmp->next;
		}
		while (tmp->prev)
			tmp = tmp->prev;
		*alst = tmp;
	}
}