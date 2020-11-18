/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghan <junghan@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 15:04:41 by junghan           #+#    #+#             */
/*   Updated: 2020/11/18 15:29:55 by junghan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *curr;
	t_list *prev;

	if (begin_list1 == 0)
		return ;
	curr = *begin_list1;
	prev = NULL;
	while (curr)
	{
		prev = curr;
		curr = curr->next;
	}
	prev->next = begin_list2;
	return  ;
}
