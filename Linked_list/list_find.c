/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghan <junghan@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 13:35:24 by junghan           #+#    #+#             */
/*   Updated: 2020/11/18 14:11:15 by junghan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_list	*list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list *tmp;

	if (begin_list == 0)
		return (NULL);
	tmp = begin_list;
	while (tmp)
	{
		if (cmp(tmp->data, data_ref) == 0)
			return (tmp);
		tmp = tmp->next;
	}
	return (tmp);
}

