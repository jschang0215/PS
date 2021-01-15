// LinkedList.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

typedef struct _list {
    int            num;
    struct _list * next;
} list;

list * head = NULL, * tail = NULL;

void
insert_list(int n)
{
    list * new_node = (list *) malloc(sizeof(list));

    new_node->num  = n;
    new_node->next = NULL;
    if (head == NULL) {
        head = new_node;
        tail = new_node;
    } else {
        tail->next = new_node;
        tail       = new_node;
    }
}

int
delete_list()
{
    list * node;

    if (head == NULL) {
        return -1;
    }
    node = head;
    head = node->next;
    free(node);
    return node->num;
}

void
print_list(list * i)
{
    if (i == NULL) {
        return;
    }
    cout << i->num << endl;
    print_list(i->next);
}

int
main()
{
    list * current;

    while (true) {
        int n;
        cin >> n;
        if (n == 0)
            break;
        insert_list(n);
    }
    print_list(head);
    return 0;
}
