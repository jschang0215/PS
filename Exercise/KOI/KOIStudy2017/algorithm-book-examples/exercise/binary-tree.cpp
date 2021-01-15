#include <iostream>

using namespace std;

typedef struct node
{
	int num;
	node *right;
	node *left;
} node;

struct node* insert_node(int n) {
	node *x;
	x = (node *)malloc(sizeof(node));
	x->num = n;
	x->left = NULL;
	x->right = NULL;
	return x;
}

void print_node(node *root) {
	cout << endl;
	(root->right) ? (cout << root->right->num << " ") : (cout << " ");
	(root->left) ? (cout << root->left->num << " ") : (cout << " ");
	if(root->right!=NULL) (print_node(root->right));
	if((root->left)!=NULL)  (print_node(root->left));
	return;
}

int main() {
	node *root = insert_node(1);
	root->right = insert_node(2);
	root->left = insert_node(3);
	root->right->right = insert_node(4);
	root->right->left = insert_node(5);
	root->left->right = insert_node(6);
	root->left->left = insert_node(7);	
	cout << root->num << endl;
	print_node(root);	
	return 0;
}