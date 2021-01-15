#include <iostream>

using namespace std;

int main() {
    int a, b, i, j,x;
    cin >> i >> a >> j >> b >> x;
    int d;
    d=(b-a)/(j-i);
    int y=0;
    y = a - (d*(i-1));
    while(y<=x) {
        cout << y << " ";
        y+=d;
    }
}
