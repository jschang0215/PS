//============================================================================
// Name        : STLPractice.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : STL Practice, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool f(int x, int y) { return x<y; }

int main() {
	vector<int> v;

	for(int i=9; i>=0; i--) v.push_back(i);

	for(auto x:v) cout << x << " ";

	cout << endl;

	sort(v.begin(), v.end(), f);

	bool isFiveExist = binary_search(v.begin(), v.end(), 5);

	v.push_back(5);

	auto it1 = lower_bound(v.begin(), v.end(), 9);
	auto it2 = upper_bound(v.begin(), v.end(), 7);

	cout << isFiveExist << endl;

	cout << it1-v.begin() << endl;
	cout << it2-v.begin() << endl;

	return 0;
}
