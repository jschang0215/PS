// 369 게임.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{
	int n=0, it=10, l=34230, clap=0, i=0;
	cin >> n;
	for (i = 1; i <= n; i++) {
		it = 10;
		while (i > it/10) {
			if (((i%it)-i%(it/10))*10/it == 3 | ((i%it) - i % (it / 10)) * 10 / it == 6 | ((i%it) - i % (it / 10)) * 10 / it ==9) {
				clap++;
			}
			it = it * 10;
		}
	}
	cout << clap << endl;
    return 0;
}

