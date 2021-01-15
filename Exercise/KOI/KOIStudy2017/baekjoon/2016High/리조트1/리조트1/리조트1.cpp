// 리조트.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//
#include <iostream>
#define min(a,b) ((a<b) ? a : b)

using namespace std;

int arr[100] = { 0 }, N = 0, M = 0; // N: 여름방학 날수, M: 리조트에 갈수없는 날의수

int f(int head, int tail, int cp)
{
	for (int i = head; i <= tail; i++)
	{
		if (arr[i] == 1) {
			arr[i] = 0;
			return min(f(head, i - 1, cp) + f(i + 1, tail, cp), f(head, tail, cp));
		}
	}
	if (tail - head + 1 >= 5) {
		return f(head + 5, tail, cp + 2) + 37000;
	}
	else if (5 > tail - head + 1 >= 3) {
		return f(head + 3, tail, cp + 1) + 25000;
	}
	else {
		if (cp >= 3) {
			return f(head + 1, tail, cp - 3);
		}
		else {
			return f(head + 1, tail, cp) + 10000;
		}
	}
}

int main()
{
	cin >> N >> M;
	for (int i = 0; i < M; i++)
	{
		int m;
		cin >> m;
		arr[i] = 1;
	}
	cout << f(1, N, 0);
}

