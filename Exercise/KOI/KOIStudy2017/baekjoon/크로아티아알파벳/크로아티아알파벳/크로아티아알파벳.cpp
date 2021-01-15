// 크로아티아알파벳.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <regex>

using namespace std;
int main()
{
	string input;
	cin >> input;
	regex reg1("c="), reg2("c-"), reg3("dz="), reg4("d-"), reg5("lj"), reg6("nj"), reg7("s="), reg8("[a-ce-z-=]+z=");
	int length = input.length();
	int w2 = 0, w3 = 0;
	sregex_iterator i1(input.begin(), input.end(), reg1);
	sregex_iterator i2(input.begin(), input.end(), reg2);
	sregex_iterator i3(input.begin(), input.end(), reg3);
	sregex_iterator i4(input.begin(), input.end(), reg4);
	sregex_iterator i5(input.begin(), input.end(), reg5);
	sregex_iterator i6(input.begin(), input.end(), reg6);
	sregex_iterator i7(input.begin(), input.end(), reg7);
	sregex_iterator i8(input.begin(), input.end(), reg8);
	sregex_iterator i1_end;
	sregex_iterator i2_end;
	sregex_iterator i3_end;
	sregex_iterator i4_end;
	sregex_iterator i5_end;
	sregex_iterator i6_end;
	sregex_iterator i7_end;
	sregex_iterator i8_end;
	if (input[0] == 'z')
		if (input[1] == '=')
			w2++;
	while (i1 != i1_end) {
		w2++;
		++i1;
	}
	while (i2 != i2_end) {
		w2++;
		++i2;
	}
	while (i3 != i3_end) {
		w3++;
		++i3;
	}
	while (i4 != i4_end) {
		w2++;
		++i4;
	}
	while (i5 != i5_end) {
		w2++;
		++i5;
	}
	while (i6 != i6_end) {
		w2++;
		++i6;
	}
	while (i7 != i7_end) {
		w2++;
		++i7;
	}
	while (i8 != i8_end) {
		w2++;
		++i8;
	}
	int result = length - w2 - (2 * w3);
	cout << result << endl;
    return 0;
}

