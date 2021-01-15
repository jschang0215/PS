//============================================================================
// Name        : ThePalindrome.cpp
// Author      : JSChang
// Version     :
// Copyright   : All rights reserved
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;

int main() {
	string s;
	cin >> s;
	for(int i=s.size(); ; i++) {
		bool flag = true;
		for(int j=0; j<s.size(); i++) {
			if(i-j-1<s.size() && s[j]!=s[i-j-1]) {
				flag = false;
				break;
			}
		}
		if(flag) {
			cout << i << endl;
			return 1;
		}
	}
	return 0;
}
