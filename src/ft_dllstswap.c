/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dllstswap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esnowpea <esnowpea@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/13 15:47:12 by esnowpea          #+#    #+#             */
/*   Updated: 2020/10/13 15:47:12 by esnowpea         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dllstswap(t_dllist *a, t_dllist *b)
{
	t_dllist	*tmp_a;
	t_dllist	*tmp_b;

	tmp_a = a->next;
	tmp_b = b->next;
	a->next = tmp_b;
	b->next = tmp_a;
	if (tmp_a)
		tmp_a->prev = b;
	if (tmp_b)
		tmp_b->prev = a;
	tmp_a = a->prev;
	tmp_b = b->prev;
	a->prev = tmp_b;
	b->prev = tmp_a;
	if (tmp_a)
		tmp_a->next = b;
	if (tmp_b)
		tmp_b->next = a;
}