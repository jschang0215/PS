#include <iostream>

using namespace std;

typedef struct node
{
	int num;
	node *next;
} node;

node *head;

void insert_node(int n)
{
	node *x;
	x = (node *)malloc(sizeof(node));
	head = x;
	x->num = 1;
	for (int i = 2; i <= n; i++)
	{
		node *tmp;
		tmp = (node *)malloc(sizeof(node));
		x->next = tmp;
		tmp->next = NULL;
		tmp->num = i;
		x = x->next;
	}
	x->next = head;
	return;
}

void delete_node(node *n)
{
	node *s;
	s = n->next;
	n->next = n->next->next;
	free(s);
}

void print_node(node *n)
{
	cout << n->num << endl;
	if(n->next != head) print_node(n->next);
	return;
}

int josephus(int n, int k)
{
	insert_node(n);
	node *x;
	x = head;
	while(x->next!=x)
	{
		for(int i=0; i<k-1; i++)
		{
			x = x->next;
		}
		cout << x->next->num << endl;
		delete_node(x);
		cout << "-----------" << endl;
		x=x->next;
	}
	return x->num;
}


int main()
{ 
	int n, k; // n개의 수, k개 건너뜀
	cin >> n >> k;
	cout << josephus(n, k) << endl;
	return 0;
}