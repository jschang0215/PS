#include <iostream>

using namespace std;

int
main()
{
    int a, b, c;

    cin >> a >> b >> c;
    if ((a >= b && a <= c) || (a >= c && a <= b)) {
        cout << "WIN";
    } else if ((a/10)+(a%10) == (b/10)+(b%10)) {
        cout << "WIN";
    } else {
        cout << "LOSE";
    }
    return 0;
}
