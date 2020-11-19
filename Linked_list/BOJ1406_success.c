#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct s_list {
    char data;
    struct s_list* next;
    struct s_list* prev;
}t_list;

void print(t_list* n) {
    t_list* temp = n;
    temp = temp->next;
    while (temp) {
        printf("%c", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    t_list* head = (t_list*)malloc(sizeof(t_list));
    head->data = '!';
    head->prev = head->next = NULL;
    t_list* cur = head;
    char t;
    while ((t = getchar()) != '\n') {
        t_list* newt_list = (t_list*)malloc(sizeof(t_list));
        newt_list->data = t;
        newt_list->prev = cur;
        newt_list->next = NULL;
        cur->next = newt_list;
        cur = newt_list;
    }
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        //print(head);
        char c;
        scanf(" %c", &c);
        switch (c) {
        case 'L': {
            if (cur->prev) cur = cur->prev;
            break;
        }case 'D': {
            if (cur->next) cur = cur->next;
            break;
        }case 'B': {
            if (cur->prev == NULL) continue;
            t_list* del = (t_list*)malloc(sizeof(t_list));
            del = cur;
            cur = del->prev;
            if (del->next) {
                cur->next = del->next;
                del->next->prev = cur;
                del->prev = NULL;
            }
            else { cur->next = NULL; }
            free(del);
            break;
        }case 'P': {
            char tmp;
            scanf(" %c", &tmp);
            t_list* newt_list = (t_list*)malloc(sizeof(t_list));
            newt_list->data = tmp;
            newt_list->prev = cur;
            if (cur->next) {
                newt_list->next = cur->next;
                cur->next->prev = newt_list;
            }
            else {
                newt_list->next = NULL;
            }
            cur->next = newt_list;
            cur = cur->next;
            break;
        }
        }
    }
    head = head->next;
    while (head) {
        printf("%c", head->data);
        head = head->next;
    }

}