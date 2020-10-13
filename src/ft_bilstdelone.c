/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bilstdelone.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnowpea <esnowpea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/28 13:20:23 by esnowpea          #+#    #+#             */
/*   Updated: 2020/10/07 19:02:27 by esnowpea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bilstdelone(t_bilist **alst, void (*del)(void*, size_t))
{
	t_bilist	*tmp;

	if (!alst || !*alst || !del)
		return ;
	tmp = *alst;
	*alst = tmp->next ? tmp->next : tmp->prev;
	if (tmp->prev)
		tmp->prev->next = tmp->next;
	if (tmp->next)
		tmp->next->prev = tmp->prev;
	(*del)(tmp->content, tmp->content_size);
	free(tmp);
	while ((*alst) && (*alst)->prev)
		*alst = (*alst)->prev;
}
