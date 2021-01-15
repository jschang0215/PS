#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int n = 0, b[150][3] = { 0 };
int a[1000000] = { 0 };
int
main()
{
    freopen("height.in", "r", stdin);
    freopen("height.out", "w", stdout);
    // freopen("/Users/jschang/Documents/koi/onvit/Height/Height.in", "r", stdin);
    // freopen("/Users/jschang/Documents/koi/onvit/Height/Height.out", "w", stdout);

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> b[i][0];
        cin >> b[i][1];
        cin >> b[i][2];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (b[i][0] < b[j][0]) {
                int tmp = 0;
                tmp     = b[i][0];
                b[i][0] = b[j][0];
                b[j][0] = tmp;
                tmp     = b[i][1];
                b[i][1] = b[j][1];
                b[j][1] = tmp;
                tmp     = b[i][2];
                b[i][2] = b[j][2];
                b[j][2] = tmp;
            }
            if (b[i][0] == b[j][0] && b[i][2] < b[j][2]) {
                int tmp = 0;
                tmp     = b[i][0];
                b[i][0] = b[j][0];
                b[j][0] = tmp;
                tmp     = b[i][1];
                b[i][1] = b[j][1];
                b[j][1] = tmp;
                tmp     = b[i][2];
                b[i][2] = b[j][2];
                b[j][2] = tmp;
            }
        }
    }
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < 3; j++) {
    //         cout << b[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    int max_e = -1;
    a[n - 1] = 0;
    for (int i = n - 2; i >= 0; i--) {
        int x = 0;
        for (int j = i + 1; j < n; j++) {
            if (b[i][2] <= b[j][2]) {
                x = a[j] + b[j][1];
                if (x >= a[i]) {
                    a[i] = x;
                }
            }
        }
        if (a[i] + b[i][1] >= max_e) {
            max_e = a[i] + b[i][1];
        }
    }
    if (n == 1) {
        max_e = b[0][1];
    }
    cout << max_e << endl;
    return 0;
} // main
