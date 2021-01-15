#include <iostream>

using namespace std;

int main() {
    int a, d, n;
    cin >> a >> d >> n;
    d = d-a;
    int x=a;
    while(x<n) {
        cout << x << " ";
        x=x+d;
    }
}
