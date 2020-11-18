/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghan <junghan@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 15:32:55 by junghan           #+#    #+#             */
/*   Updated: 2020/11/18 16:01:32 by junghan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	swap(void **data1, void **data2)
{
	void *tmp;

	tmp = *data1;
	*data1 = *data2;
	*data2 = tmp;
}


void	list_sort(t_list **begin_list, int (*cmp)())
{
	int flag;
	t_list *curr;
	t_list *prev;
	t_list *tmp;

	if (begin_list == 0)
		return ;
	flag = 1;
	while (flag)
	{
		flag = 0;
		curr = *begin_list;
		prev = NULL;
		while (curr)
		{
			if (prev && cmp(prev->data, curr->data) > 0)
			{
				swap(&(prev->data), &(curr->data));
				flag = 1;
			}
			prev = curr;
			curr = curr->next;
		}
	}
}
