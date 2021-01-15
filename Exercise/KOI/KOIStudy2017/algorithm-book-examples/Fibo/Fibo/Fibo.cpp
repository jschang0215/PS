// Fibo.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

long long int memo[5000] = { 0 };
long long fibo(int n) {
	if (memo[n] > 0) {
		return memo[n];
	}
	if (n == 1 || n == 2) {
		return memo[n] = 1;
	}
	return memo[n] = fibo(n - 1) + fibo(n - 2);
}

int main()
{
	cout << memo[20] << endl;
	int n = 0;
	cout << "Input number: ";
	cin >> n;
	cout << fibo(n) << endl;
    return 0;
}

