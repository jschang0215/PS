#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int n = 0, coin[10] = { 0 };
int w        = 0;
int a[65000] = { 0 };

int
main()
{
    freopen("coin.in", "r", stdin);
    freopen("coin.out", "w", stdout);
    // freopen("/Users/jschang/Documents/koi/onvit/coin/coin.in", "r", stdin);
    // freopen("/Users/jschang/Documents/koi/onvit/coin/coin.out", "w", stdout);

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> coin[i];
        a[coin[i]] = 1;
    }
    cin >> w;
    for (int i = 1; i <= w; i++) {
        int x = 0, min_x = 999999;
        for (int j = 0; j < i; j++) {
            if ((a[i - j] * a[j]) != 0) {
                x = a[i - j] + a[j];
                if (x < min_x && a[i] != 1) {
                    min_x = x;
                    a[i]  = min_x;
                }
            }
        }
    }
    cout << a[w] << endl;
    return 0;
}
