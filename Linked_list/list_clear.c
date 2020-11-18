/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghan <junghan@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 15:03:49 by junghan           #+#    #+#             */
/*   Updated: 2020/11/16 15:14:48 by junghan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	free_fct(void *data)
{
	free(data);
}

void	list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list *curr;
	t_list *tmp;

	if (free_fct == 0)
		return ;
	curr = begin_list;
	while(tmp)
	{
		tmp = curr;
		curr = curr->next;
		free_fct(tmp->data);
		free(tmp);
	}
}
	
