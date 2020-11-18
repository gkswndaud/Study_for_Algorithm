/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghan <junghan@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 12:29:07 by junghan           #+#    #+#             */
/*   Updated: 2020/11/18 12:45:41 by junghan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(void)
{
	int	idx;
	int	*malloced_idx;
	t_list	*list;
	t_list	*curr;

	idx = 1;
	list = create_elem(0);
	while (idx < 10)
	{
		if(!(malloced_idx = malloc(sizeof(int))))
			return (1);
		*malloced_idx = idx;
		list_push_back(&list, (void*)malloced_idx);
		printf("list[%d] = %d\n", idx, *malloced_idx);
		idx++;
	}
	idx = 1;
	list_reverse(&list);
	printf("Reversed\n");
	curr = list;
	while (idx < 10)
	{
		printf("list[%d] = %d\n", idx, *((int*)curr->data));
		idx++;
		curr = curr->next;
	}
}
