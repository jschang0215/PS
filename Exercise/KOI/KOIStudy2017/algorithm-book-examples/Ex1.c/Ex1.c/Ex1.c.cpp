#include "stdafx.h"
#include <iostream>

using namespace std;

void print_arr(int arr[], int arr_length) {
	for (int i = 0; i < arr_length; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int sum_arr[100] = { 0 };
void make_sum(int n, int m, int arr[], int x) {
	if (n == 0 && x==m) {
		print_arr(arr, m);
	}
	else if (n > 0) {
		for (int i = 1; i <= n; i++)
		{
			if (n - i >= 0 && x < m) {
				arr[x] = i;
				make_sum(n - i, m, arr, x + 1);
			}
		}
	}
}

int main()
{
	int n, m;
	cout << "n, m: ";
	cin >> n >> m;
	make_sum(n, m, sum_arr, 0);
    return 0;
}

