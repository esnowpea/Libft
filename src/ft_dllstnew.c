/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dllistnew.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnowpea <esnowpea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/28 13:15:16 by esnowpea          #+#    #+#             */
/*   Updated: 2020/08/28 13:15:16 by esnowpea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_dllist	*ft_dllstnew(void const *content, size_t content_size)
{
	t_dllist	*dllist;

	dllist = (t_dllist*)ft_memalloc(sizeof(t_dllist));
	if (!dllist)
		return (0);
	if (!content)
		return (dllist);
	dllist->content = (void*)content;
	dllist->content_size = content_size;
	return (dllist);
}
