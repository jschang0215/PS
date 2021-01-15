#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

bool
f(int n)
{
    for (int i = 1; i <= (int) (sqrt(n)); i++) {
        if (i * i == n) {
            return true;
        }
    }
    return false;
}

int
main()
{
    // freopen("/Users/jschang/Documents/koi/onvit/b-06_07/b-06_07.in", "r", stdin);
    freopen("b-05_12.out", "w", stdout);

    int n = 0, i = 2;

    while (n < 5) {
        int tmp;
        tmp = (i * (i + 1)) / 2;
        if (f(tmp) == true) {
            cout << (int) (sqrt(tmp)) << " " << i << endl;
            n++;
        }
        i++;
    }
    return 0;
}
