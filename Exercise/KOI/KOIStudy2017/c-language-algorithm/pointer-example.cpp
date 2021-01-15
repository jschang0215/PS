#include <iostream>

using namespace std;

// void f_s(char *imsip, char* source) {
// 	int i, j;
// 	int temp;
// 	imsip = (char *)malloc(sizeof(char)*strlen(source));
// 	strcpy(imsip, source);
// 	for(i=0, j=strlen(source)-1; i<j; i++, j--) {
// 		temp = imsip+i;
// 		*(imsip+i) = *(imsip+j);
// 		*(imsip+j) = *(int *)temp;
// 	}	
// 	cout << imsip << endl;
// }

int main() {
	int arr[2][2] = {{0, 1}, {2, 3}};
	cout << *(*(arr + 1) + 1) << endl;
	//char *p;
	//char string[30];
	//cin >> string;
	//f_s(p, string);
	// char *string;
	// string = (char *)malloc(sizeof(char)*30);
	// fgets(string, 30, stdin);
	// *(string + strlen(string) - 1) = '\0';
	// cout << string << endl;	
	return 0;
}