/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghan <junghan@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 11:38:18 by junghan           #+#    #+#             */
/*   Updated: 2020/11/18 12:27:56 by junghan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	list_reverse(t_list **begin_list)
{
	t_list *next;
	t_list *curr;
	t_list *prev;

	if (begin_list == 0)
		return ;
	curr = *begin_list;
	prev = NULL;
	while (curr)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	(*begin_list) = head;
	return ;
}

