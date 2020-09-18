/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bilstdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnowpea <esnowpea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 13:36:38 by esnowpea          #+#    #+#             */
/*   Updated: 2020/09/18 13:36:38 by esnowpea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_bilist	*ft_bilstdup(t_bilist *src)
{
	t_bilist *list;
	t_bilist *tmp;

	list = 0;
	tmp = src;
	while (tmp)
	{
		ft_bilstadd_back(&list, ft_bilstnew(tmp->content, tmp->content_size));
		tmp = tmp->next;
	}
	return (list);
}