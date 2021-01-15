//============================================================================
// Name        : BOJ1003.cpp
// Author      : JSChang
// Version     :
// Copyright   : All rights reserved
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <utility>

#define N 40

using namespace std;

int main() {
	int testCase = 0;

	cin >> testCase;
	vector<pair<int, int> > dp;

	dp.push_back(pair<int, int> (1, 0));
	dp.push_back(pair<int, int> (0, 1));

	for(int i=2; i<=N; i++) {
		int zero = dp[i-1].first+dp[i-2].first;
		int one = dp[i-1].second+dp[i-2].second;

		dp.push_back(pair<int, int> (zero, one));
	}

	for(int i=0; i<testCase; i++) {
		int n;
		cin >> n;
		cout << dp[n].first << " " << dp[n].second << endl;
	}
	return 0;
}
