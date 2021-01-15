#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int n = 0, w = 0, a[51][2] = { 0 }; // a[][0] = 무게, a[][1] = 값어치
int v[50][1001] = { 0 };            // v[1~number][weight]

int
max(int a, int b)
{
    if (a > b) return a;
    else return b;
}

int
main()
{
    // freopen("knapsack.in", "r", stdin);
    // freopen("knapsack.out", "w", stdout);
    freopen("/Users/jschang/Documents/koi/onvit/knapsack/knapsack.in", "r", stdin);
    freopen("/Users/jschang/Documents/koi/onvit/knapsack/knapsack.out", "w", stdout);
    cin >> n;
    cin >> w;

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= w; j++) {
            if (j >= a[i][0]) {
                v[i][j] = max(v[i - 1][j], a[i][1] + v[i - 1][j - a[i][0]]);
            } else {
                v[i][j] = v[i - 1][j];
            }
        }
    }
    cout << v[n][w] << endl;
    return 0;
} // main
