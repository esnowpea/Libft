/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dllstadd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnowpea <esnowpea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/28 13:24:49 by esnowpea          #+#    #+#             */
/*   Updated: 2020/08/28 13:24:49 by esnowpea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dllstadd(t_dllist **alst, t_dllist *new)
{
	if (!alst || !new)
		return ;
	new->next = *alst;
	if (*alst && (*alst)->prev)
	{
		(*alst)->prev->next = new;
		new->prev = (*alst)->prev;
	}
	if (*alst)
		(*alst)->prev = new;
	*alst = new;
}
