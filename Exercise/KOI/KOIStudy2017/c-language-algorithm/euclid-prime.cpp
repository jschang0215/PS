#include <iostream>
#include <algorithm>

using namespace std;

int gcd(int x, int y) {
	int a=x, b=y;
	while(a>0) {
		if(a<b)
			swap(a, b);
		a=a%b;
	}
	return b;

}

int main() {
	int x, y;
	cin >> x >> y;
	cout << gcd(x,y) << endl;
}