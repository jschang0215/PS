// Regex.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <regex>
#include <string>

using namespace std;

int main()
{
	regex reg1 ("[a-zA-Z][a-zA-Z0-9]*\\.[a-zA-Z]+", regex_constants::icase);
	string file1 = "There is a readme.txt in my folder!";
	string file2 = "VisualStudio.cpp is in VisualStudio.sln file which is in my computer!";

	sregex_iterator it(file1.begin(), file1.end(), reg1);
	sregex_iterator it_end;
	int cnt = 0;
	while (it != it_end) {
		smatch match = *it;
		cout << match.str() << endl;
		cnt++;
		it++;
	}
	cout << cnt << endl;
    return 0;
}

