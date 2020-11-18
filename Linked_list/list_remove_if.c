/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghan <junghan@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 14:11:44 by junghan           #+#    #+#             */
/*   Updated: 2020/11/18 15:04:03 by junghan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	free_fct(void *link)
{
	free(link);
}

void	list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(), void (*free_fct)(void *))
{
	t_list *curr;
	t_list *tmp;
	t_list *prev;

	if (begin_list == 0)
		return ;
	prev = NULL;
	curr = (*begin_list);
	while (curr)
	{
		tmp = curr->next;
		if (prev == NULL && cmp(curr->data, data_ref) == 0)
		{
			*begin_list = tmp;
			free_fct(curr->data);
			free_fct(curr);
		}
		else if (cmp(curr->data, data_ref) == 0)
		{
			prev->next = curr->next;
			free_fct(curr->data);
			free_fct(curr);
		}
		prev = curr;
		curr = tmp;
	}
}
