// 2.3출근길은 즐거워.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

/* 
Test Data

5 5
1 2 2 1 5
1 4 4 3 1
2 1 1 1 2
1 3 5 1 1
1 5 1 2 2

Result

22
*/

#include <iostream>
#define M 100
#define N 100
#define max(a, b) ((a>b) ? a : b)

using namespace std;

long long int map[M][N] = { 0 };

int max_joy(int m, int n) {
	if (m == 0 && n == 0) {
		return map[m][n];
	}
	if (m == 0) {
		return max_joy(m, n - 1) + map[m][n];
	}
	if (n == 0) {
		return max_joy(m - 1, n) + map[m][n];
	}
	return max(max_joy(m, n - 1), max_joy(m - 1, n)) + map[m][n];
}

int main()
{
	int m, n;
	cin >> m >> n;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> map[i][j];
		}
	}
	cout << max_joy(m - 1, n - 1) << endl;
    return 0;
}

