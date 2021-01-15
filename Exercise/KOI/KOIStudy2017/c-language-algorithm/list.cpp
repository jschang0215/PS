#include <iostream>

using namespace std;

typedef struct student
{
	char *name;
	int age;
	struct student *next;
} student;

student *head, *st;

void insert_node(char *name, int age) {
	student *temp;
	temp = (student *)malloc(sizeof(student));
	temp->name = name;
	temp->age = age;
	temp->next = NULL;
	st->next = temp;
	st = st->next;
}

void print_node() {
	for(st = head; st->next; st=st->next) {
		cout << st->name << " " << st->age << endl;
	}
}

int main() {
	head = (student *)malloc(sizeof(student));
	st = (student *)malloc(sizeof(student));
	head->name = "Messi";
	head->age  = 30;
	head->next = NULL;
	st = head;
	//cout << head->name << endl;
	insert_node("Suarez", 30);
	print_node();
	return 0;
}