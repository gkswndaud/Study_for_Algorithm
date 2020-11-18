/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghan <junghan@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 14:06:44 by junghan           #+#    #+#             */
/*   Updated: 2020/11/16 14:12:23 by junghan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

int	list_size(t_list *begin_list)
{
	int count;
	t_list *tmp;

	tmp = begin_list;
	count = 0;
	if (begin_list == 0)
		return (0);
	while(tmp)
	{
		count++;
		tmp = tmp->next;
	}
	return(count);
}
