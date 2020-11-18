/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghan <junghan@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 13:00:31 by junghan           #+#    #+#             */
/*   Updated: 2020/11/16 14:06:00 by junghan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "creat_elem.c"

void	list_push_front(t_list **begin_list, void *data)//idx가 중간인 위치에 삽입은 굳이 이중포인터를 사용할 일이 없으나 맨 처음에 위치하는 값은 head의 주소값이 가리키는 방향을 수정해야하기 때문에 이중포인터로 begin_list의 주소를 받아온다.
{
	t_list *new_node;

	new_node = creat_elem(data);
	if (new_node == 0)
		return ;
	if (begin_list != 0)
		new_node->next = *begin_list;
	*begin_list = new_node;
}
