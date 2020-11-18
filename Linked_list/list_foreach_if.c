/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghan <junghan@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 12:59:17 by junghan           #+#    #+#             */
/*   Updated: 2020/11/18 13:35:00 by junghan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	strcmp(void *data, void *ref)
{
	int i;

	i = 0;
	while(data[i] && ref[i])
	{
		return(data[i] - ref[i]);
		i++;
	}
	return (data[i] - ref[i]);
}

void	list_foreach_if(t_list *begin_list, void(*f)(void *), void *data_ref, int (*cmp)())
{
	t_list *tmp;

	if (begin_list == 0)
		return ;
	tmp = begin_list;
	while (tmp)
	{
		if(cmp(tmp->data, data_ref) == 0)
			f(tmp->data);
		tmp = tmp->next;
	}
}
