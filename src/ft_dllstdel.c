/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dllstdel.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnowpea <esnowpea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/28 17:59:31 by esnowpea          #+#    #+#             */
/*   Updated: 2020/08/28 17:59:31 by esnowpea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dllstdel(t_dllist **alst, void (*del)(void*, size_t))
{
	t_dllist	*next;
	t_dllist	*tmp;

	if (!alst || !(*alst) || !del)
		return ;
	tmp = *alst;
	while (tmp->prev)
		tmp = tmp->prev;
	next = tmp->next;
	while (tmp)
	{
		ft_dllstdelone(&tmp, del);
		tmp = next;
		if (tmp)
			next = tmp->next;
	}
	*alst = tmp;
}
