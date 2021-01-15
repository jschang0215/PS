#include <iostream>
#include <stdio.h>

using namespace std;

typedef struct _node {
    int            num;
    struct _node * next;
} node;

node * head = NULL;
node * tail = NULL;

void
insert_node(int n)
{
    node * new_node = (node *) malloc(sizeof(node));

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

void
delete_node(node * n) // n다음 원소 지움
{
    n->next = n->next->next;
    // cout << n->next->num << endl;
    // free(n->next);
}

int
main()
{
    // freopen("b-06_07.in", "r", stdin);
    // freopen("b-06_07.out", "w", stdout);

    freopen("/Users/jschang/Documents/koi/onvit/b-06_07/b-06_07.in", "r", stdin);
    freopen("/Users/jschang/Documents/koi/onvit/b-06_07/b-06_07.out", "w", stdout);
    int n = 0, s = 0, k = 0;
    cin >> n >> s >> k;
    for (int i = 1; i <= n; i++) {
        insert_node(i);
    }
    tail->next = head;
    node * start;
    start = head;
    while (1) {
        if (start->num == s) {
            break;
        } else {
            start = start->next;
        }
    }
    int del = 0;
    node * tmp;
    tmp = start;
    if (k == 1) {
        cout << tail->num << endl;
        return 0;
    }
    while (del < n - 1) {
        for (int i = 0; i < k - 2; i++) {
            tmp = tmp->next;
        }
        delete_node(tmp);
        del++;
        tmp = tmp->next;
    }
    cout << tmp->num << endl;
    return 0;
} // main
