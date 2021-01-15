//============================================================================
// Name        : KiwiJuice.cpp
// Author      : JSChang
// Version     :
// Copyright   : All rights reserved
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> capacities, bottles, fromId, toId;
	capacities = {30, 20, 10};
	bottles = {10, 5, 5};
	fromId = {0, 1, 2};
	toId = {1, 2, 0};

	for(int i=0; i<fromId.size(); i++) {
		int sum = bottles[fromId[i]]+bottles[toId[i]];
		bottles[toId[i]] = min(sum, capacities[toId[i]]);
		bottles[fromId[i]] = sum-bottles[toId[i]];
	}

	for(auto x : bottles) {
		cout << x << " ";
	}
	return 0;
}
