// 단어의개수.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <regex>
#include <string>

using namespace std;
int main()
{
	string input;
	getline(cin, input);
	int words = 0;
	regex reg_word("[a-zA-Z]");
	sregex_iterator i(input.begin(), input.end(), reg_word);
	sregex_iterator i_end;
	while (i != i_end) {
		words++;
		++i;
	}
	if (words == 0) {
		cout << "0" << endl;
		return 0;
	}
	if (input[0] == ' ' && input[input.length() - 1] == ' ') {
		cout << input.length() - words - 1 << endl;
		return 0;
	}
	if (input[0] == ' ' || input[input.length()-1] == ' ')
		cout << input.length() - words << endl;
	else
		cout << input.length() - words +1 << endl;
    return 0;
}

