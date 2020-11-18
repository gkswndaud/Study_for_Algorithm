/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghan <junghan@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 14:12:45 by junghan           #+#    #+#             */
/*   Updated: 2020/11/16 14:19:59 by junghan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_list	*list_last(t_list *begin_list)
{
	t_list *tmp;

	if (begin_list == 0)
		return (0);
	tmp = begin_list;
	while(tmp->next)
	{
		tmp = tmp->next;
	}
	return (tmp);
}
