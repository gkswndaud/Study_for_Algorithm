/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghan <junghan@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 12:48:25 by junghan           #+#    #+#             */
/*   Updated: 2020/11/18 12:57:33 by junghan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include <stdio.h>
/*
void	print_data(void *data)
{
	printf("%s", data);
}
*/
void	list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list *tmp;

	if (begin_list == 0)
		return ;
	tmp = begin_list;
	while (tmp)
	{
		f(tmp->data);
		tmp = tmp->next;
	}
	return ;
}

