/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghan <junghan@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 14:21:07 by junghan           #+#    #+#             */
/*   Updated: 2020/11/16 14:40:11 by junghan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include "creat_elem.c"

void	list_push_back(t_list **begin_list, void *data)
{
	t_list *tmp;
	t_list *new_node;

	if (begin_list == 0)
		return ;
	tmp = *begin_list;
	new_node = create_elem(data);
	if (new_node == 0)
		return ;
	if (*begin_list == 0)
	{
		*begin_list = new_node;
		return ;
	}
	while (tmp->next)
		tmp = tmp->next
	tmp->next = new_node;
}
