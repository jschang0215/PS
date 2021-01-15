#include <iostream>

using namespace std;

int arr[100] = { 0 }, N = 0, M = 0; // N: 여름방학 날수, M: 리조트에 갈수없는 날의수
int c = 0;
int cp_arr[100][100] = { 0 };
int tmp[100][100] = { 0 };
int sum_arr[100][100][3] = { 0 };

int sum(int length, int i, int j) {
	while (length > 0) {
		if (length > 4 && cp_arr[i][j] < 9) {
			cp_arr[i][j] += 2;
			sum_arr[i][j][0]++;
			length -= 5;
		}
		else if (length > 2 && cp_arr[i][j] < 3) {
			cp_arr[i][j]++;
			sum_arr[i][j][1]++;
			length -= 3;
		}
		else if (length > 0) {
			if (cp_arr[i][j] > 2) {
				cp_arr[i][j] = cp_arr[i][j] - 3;
				length --;
			}
			else {
				sum_arr[i][j] += 10000;
				length--;
			}
		}
	}
	return 0;
}

int part() {
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			tmp[i][j] = arr[j];
		}
	}
	for (int i = 1; i <= N; i++) {
		for (int j = i; j <= N; j++) {

			int last_it = 1;
			if(tmp[i][j] == 1)
				tmp[i][j] = 0;
			for (int k = 1; k <= N; k++) {
				if (tmp[i][k] == 1) {
					int length = k - last_it;
					sum(length, i, j);
					last_it = k+1;
				}
				if (k == N) {
					int length = k - last_it + 1;
					sum(length, i, j);
				}
			}
		}
	}
	return 0;
}

int main()
{
	cin >> N >> M;
	for (int i = 1; i <= M; i++)
	{
		int m;
		cin >> m;
		arr[m] = 1;
	}
	part();
	int min = 10000000;
	if (M == N) {
		cout << 0 << endl;
		return 0;
	}
	for (int i = 1; i <=N; i++) {
		for (int j = 1; j <= N; j++) {
			if (sum_arr[i][j] > 0)
				if (sum_arr[i][j] < min)
					min = sum_arr[i][j];
		}
	}
	cout << "";
	cout << min << endl;
	return 0;
}

