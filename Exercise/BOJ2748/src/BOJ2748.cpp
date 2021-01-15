//============================================================================
// Name        : BOJ2748.cpp
// Author      : JSChang
// Version     :
// Copyright   : 
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	vector<long long> dp;
	cin >> n;
	dp.push_back(0);
	dp.push_back(1);
	for(int i=2; i<=n; i++) {
		dp.push_back(dp[i-1]+dp[i-2]);
	}
	cout << dp[n] << endl;
	return 0;
}
