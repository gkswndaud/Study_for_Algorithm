#define _CRT_SECURE_NO_WARNINGS



#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct		s_list
{
	struct s_list* next;
	struct s_list* prev;
	char data;
}			t_list;

t_list* mk_newlist(char data)
{
	t_list* link;

	if (!(link = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	link->next = 0;
	link->prev = 0;
	link->data = data;
	return (link);
}

void	push_back(t_list** curr, char data)
{
	t_list* new;

	new = (t_list*)malloc(sizeof(t_list));
	new->prev = (*curr);
	new->next = 0;
	new->data = data;
	(*curr)->next = new;
	(*curr) = new;
}

void	del_link(t_list** curr, t_list** head)
{
	t_list* tmp;
	t_list* del;

	tmp = (*curr);
	if ((*curr) == 0)
		return ;
	if ((*curr)->prev == 0)
	{
		if ((*curr)->data == 0)
			return ;
		tmp = (t_list*)malloc(sizeof(t_list));
		tmp->next = (*curr)->next;
		tmp->prev = 0;
		tmp->data = 0;
		if ((*curr)->next)
			(*curr)->next->prev = tmp;
		del = (*curr);
		(*curr) = tmp;
		(*head) = tmp;
		free(del);
		return ;
	}
	if ((*curr)->next)
		(*curr)->next->prev = (*curr)->prev;
	(*curr)->prev->next = (*curr)->next;

	(*curr) = (*curr)->prev; //커서 움직이는 역할
	free(tmp);
}

void	add_link(t_list** curr, char data)
{
	t_list* tmp;

	if ((*curr) == 0)
		return ;
	tmp = (t_list*)malloc(sizeof(t_list));
	tmp->prev = (*curr);
	tmp->data = data;
	if ((*curr)->next)
	{
		tmp->next = (*curr)->next;
		(*curr)->next->prev = tmp;
	}
	else
		tmp->next = NULL;
	(*curr)->next = tmp;
	(*curr) = (*curr)->next; //커서를 옮김.
}

void	print_editor(t_list* curr)
{
	t_list* tmp;
	int i;

	i = 0;
	tmp = curr;
	while (tmp)
	{
		if((i != 0 || tmp->data != '\0') && (tmp->data != '\n' || i != 0))
			printf("%c", tmp->data);
		tmp = tmp->next;
		i++;
	}
}

int main()
{
	t_list* head;
	t_list* curr;
	int count;
	int idx;
	char memo;
	char comm;

	head = NULL;
	memo = getchar();
	head = mk_newlist(memo);
	curr = head;
	while (memo != '\n' && (memo = getchar()) != '\n')
	{
		push_back(&curr, memo);
	}
	scanf("%d", &count);
	idx = 0;
	while (idx < count && head)
	{
		scanf(" %c", &comm);

		if (comm == 'L')
		{
			if (curr->prev)
				curr = curr->prev;
		}
		else if (comm == 'D')
		{
			if (curr->next)
				curr = curr->next;
		}
		else if (comm == 'B')
		{
			del_link(&curr, &head);
		}
		else if (comm == 'P')
		{
			scanf(" %c", &comm);
			add_link(&curr, comm);
		}
		idx++;
	}
	print_editor(head);

	return (0);
}