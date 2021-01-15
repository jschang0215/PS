// KOI 본선 2004 초2.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
	int snum = 0;
	vector<int> num;
	cin >> snum;
	for (auto i = 0; i < snum; i++) {
		auto a = 0;
		cin >> a;
		auto it = num.begin() + a;
		num.insert(it, i+1);
	}
	for (int i = 0; i < snum; i++) {
		cout << num[snum -1 - i] << " ";
	}
    return 0;
}

