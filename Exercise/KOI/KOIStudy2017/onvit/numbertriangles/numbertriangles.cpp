#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int n = 0;
int a[1001][1001] = { 0 };
int v[1000]       = { 0 };
int max_x         = 0;

int
max(int a, int b)
{
    if (a > b) return a;
    else return b;
}

int
main()
{
    // freopen("numbertriangles.in", "r", stdin);
    // freopen("numbertriangles.out", "w", stdout);
    freopen("/Users/jschang/Documents/koi/onvit/numbertriangles/numbertriangles.in", "r", stdin);
    freopen("/Users/jschang/Documents/koi/onvit/numbertriangles/numbertriangles.out", "w", stdout);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            a[i][j] = max(a[i - 1][j], a[i - 1][j - 1]) + a[i][j];
            if (a[i][j] > max_x) max_x = a[i][j];
        }
    }
    cout << max_x << endl;
    return 0;
} // main
