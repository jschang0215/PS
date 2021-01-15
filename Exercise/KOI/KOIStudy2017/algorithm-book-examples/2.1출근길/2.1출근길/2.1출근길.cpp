// 2.1출근길.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

/* Test Data

5 5
1 1 1 1 1
1 1 0 0 1
1 1 1 1 1
1 1 1 0 1
0 0 1 1 1

Result

11

*/

#include <iostream>

#define M 100
#define N 100

using namespace std;

int map[M][N] = { 0 };
long long int path_memo[M][N] = { 0 };

long long int num_path(int m, int n) {
	if (path_memo[m][n] > 0) {
		return path_memo[m][n];
	}
	if (map[m][n] == 0) {
		return path_memo[m][n] = 0;
	}
	if (m == 0 && n == 0) {
		return path_memo[m][n] = 1;
	}
	return path_memo[m][n] = num_path(m, n-1) + num_path(m-1, n);
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

	cout << num_path(m-1,n-1) << endl;
    return 0;
}

