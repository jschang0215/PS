// Ex1.e(Josephus).cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include <iostream>

using namespace std;
long long int Josephus(long long int n) {
	if (n == 1 || n == 2)
		return 1;
	if (n == 3)
		return 3;
	if (n % 2 == 0)
	{
		return (Josephus(n / 2) * 2) - 1;
	}
	else if (n % 2 == 1)
	{
		return (Josephus((n - 1) / 2) * 2) + 1;
	}
}

int main()
{
	long long int n = 0;
	cout << "Numbers of people: ";
	cin >> n;
	cout << Josephus(n) << " is Alive" << endl;
    return 0;
}

