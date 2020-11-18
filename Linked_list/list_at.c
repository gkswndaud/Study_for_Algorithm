/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghan <junghan@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 15:15:14 by junghan           #+#    #+#             */
/*   Updated: 2020/11/18 11:37:49 by junghan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_list	*list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int count;
	t_list *tmp;

	if (begin_list == 0)
		return (0);
	tmp = begin_list;
	count = 0;
	while (tmp && count < nbr)
	{
		tmp = tmp->next;
		count++;
	}
	if (tmp == 0 || count != nbr)
		return (0);
	return (tmp);
}
