#include <iostream>

using namespace std;

int main() {
    long long int x=1, y=1, z;
    int n;
    cin >> n;
    for(int i=3; i<=n; i++) {
        z=(x+y)%1000000007;
        x=y%1000000007;
        y=z%1000000007;
    }
    cout << z;
}
