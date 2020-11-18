/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghan <junghan@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 15:38:42 by junghan           #+#    #+#             */
/*   Updated: 2020/11/16 15:24:07 by junghan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "list.h" 

t_list	*create_elem(void *data)//구조체의 기초 연결리스트생성
{
	t_list *list;
	
	list = (t_list *)malloc(sizeof(t_list));
	list->next = 0;
	list->data = data;
	return (list);
}
