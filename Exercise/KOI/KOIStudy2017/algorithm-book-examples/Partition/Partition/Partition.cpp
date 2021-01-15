// Partition.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

using namespace std;



void print_arr(int arr[], int length) {
	for (int i = 0; i < length; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	return;
}

int partition(int n, int m, int arr[] ,int x) {
	int memo[100][100] = { 0 };
	int cnt = 0;
	if (n < m) {
		m = n;
	}
	if (n == 0) {
		print_arr(arr, x);
		x = 0;
		return memo[n][m] = 1;
	}
	if (memo[n][m] > 0) {
		return memo[n][m];
	}
	for (int i = 1; i <= m; i++) {
		arr[x] = i;
		cnt += partition(n - i, i, arr, x + 1);
	}
	return memo[n][m] = cnt;
}

int main()
{
	int n = 0, m = 0, arr[10000];
	cout << "Input n m: ";
	cin >> n;
	cin >> m;
	int x = partition(n, m, arr, 0);
	cout << x << endl;
    return 0;
}

