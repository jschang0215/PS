#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int n = 0, arr[12][12] = { 0 };
int max_x = 100000000;
int check_data[12] = { 0 };

void
clear_data()
{
    for (int i = 0; i < n; i++) {
        check_data[i] = 0;
    }
}

void
dfs(int i, int x, int it)
{
    for (int j = 1; j < n; j++) {
        if (check_data[j] == 0 && (j != i) && (arr[j][i] != 0)) {
            int tmp;
            tmp = x + arr[j][i];
            check_data[j] = -1;
            dfs(j, tmp, it + 1);
            check_data[j] = 0;
        }
    }
    if (it == n - 1) {
        int tmp = x + arr[0][i];
        // cout << tmp << endl;
        // clear_data();
        if (tmp < max_x) {
            max_x = tmp;
        }
    }
}

int
main()
{
    freopen("hamil.in", "r", stdin);
    freopen("hamil.out", "w", stdout);
    // freopen("/Users/jschang/Documents/koi/onvit/hamil/hamil.in", "r", stdin);
    // freopen("/Users/jschang/Documents/koi/onvit/hamil/hamil.out", "w", stdout);

    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    check_data[0] = -1;
    dfs(0, 0, 0);
    cout << max_x << endl;
    return 0;
}
