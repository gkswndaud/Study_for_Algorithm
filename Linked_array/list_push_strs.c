/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghan <junghan@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 14:40:46 by junghan           #+#    #+#             */
/*   Updated: 2020/11/16 15:03:08 by junghan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include "creat_elem.c"

void	list_push_front(t_list **begin_list, void *data)
{
	t_list *new_elem;

	new_elem = creat_elem(data);
	if (new_elem == 0)
		return ;
	if (begin_list != 0)
		new_elem->next = *begin_list;
	*begin_list = new_elem;
}

t_list	*list_push_strs(int size, char **strs)
{
	int i;
	t_list *list;

	list = create_elem(strs[0]);
	if (list == 0)
		return (0);
	i = 1;
	while (i < size)
	{
		list_push_front(&list, strs[i]);
		i++;
	}
	return (list);
}
