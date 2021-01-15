#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int n = 0, w = 0, a[501][2] = { 0 }; // a[][0] = 값어치, a[][1] = 무게
int v[10001][10001] = { 0 };         // v[1~number][weight]

int
min(int a, int b)
{
    if (a == 0 && b == 0) return 0;

    if (a == 0) return b;

    if (b == 0) return a;

    if (a > b) return b;
    else return a;
}

int
main()
{
    // freopen("juice.in", "r", stdin);
    // freopen("juice.out", "w", stdout);
    freopen("/Users/jschang/Documents/koi/onvit/juice/juice.in", "r", stdin);
    freopen("/Users/jschang/Documents/koi/onvit/juice/juice.out", "w", stdout);
    int w_b = 0;
    cin >> w_b;
    cin >> w;
    w = w - w_b;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> a[i][j];
        }
    }
    // cout << w << endl;
    // for (int i = 1; i <= n; i++) {
    //     for (int j = 0; j < 2; j++) {
    //         cout << a[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    for (int i = 1; i <= w; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == a[j][1]) {
                v[j][i] = min(v[j - 1][i], a[j][0]);
            } else if (i > a[j][1]) {
                if (v[j][i - a[j][1]] == 0) v[j][i] = v[j - 1][i];
                else v[j][i] = min(v[j - 1][i], (a[j][0] + v[j][i - a[j][1]]));
            } else {
                v[j][i] = v[j - 1][i];
            }
        }
    }
    // for (int i = 1; i <= n; i++) {
    //     for (int j = 0; j <= w; j++) {
    //         cout << v[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    if (v[n][w] == 0) cout << "impossible" << endl;
    else cout << v[n][w] << endl;
    return 0;
} // main
