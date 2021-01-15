#include <iostream>

using namespace std;

typedef struct st {
	char name[30];
	int i[30];
	int age;
} card;

int main() {
	card *a;
	a = (card *)malloc(sizeof(card));
	strcpy(a->name, "Hello World");
	a->i[1]=10;
	printf("%#010x\n", a);
	cout << a->name << endl;
	return 0;
}