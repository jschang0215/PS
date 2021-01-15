#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int n = 0, m = 0;
int arr[101][101] = { 0 };

void
dfs(int i, int j)
{
    arr[i][j] = 2;
    if (i < n && arr[i + 1][j] == 1) {
        arr[i + 1][j] = -1;
    }
    if (i > 0 && arr[i - 1][j] == 1) {
        arr[i - 1][j] = -1;
    }
    if (j < m && arr[i][j + 1] == 1) {
        arr[i][j + 1] = -1;
    }
    if (j > 0 && arr[i][j - 1] == 1) {
        arr[i][j - 1] = -1;
    }
    if (i < n && arr[i + 1][j] == 0) {
        dfs(i + 1, j);
    }
    if (i > 0 && arr[i - 1][j] == 0) {
        dfs(i - 1, j);
    }
    if (j < m && arr[i][j + 1] == 0) {
        dfs(i, j + 1);
    }
    if (j > 0 && arr[i][j - 1] == 0) {
        dfs(i, j - 1);
    }
}

int
main()
{
    freopen("cheese.in", "r", stdin);
    freopen("cheese.out", "w", stdout);
    // freopen("/Users/jschang/Documents/koi/onvit/cheese/cheese.in", "r", stdin);
    // freopen("/Users/jschang/Documents/koi/onvit/cheese/cheese.out", "w", stdout);

    cin >> m;
    cin >> n;
    int hour = 0;
    int l    = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    int tmp = 0;
    while (l != 0) {
        tmp = l;
        l   = 0;
        int x, y;
        dfs(0, 0);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (arr[i][j] == -1) {
                    arr[i][j] = 0;
                    l++;
                }
                if (arr[i][j] == 2) {
                    arr[i][j] = 0;
                }
            }
        }
        // for (int i = 0; i < n; i++) {
        //     for (int j = 0; j < m; j++) {
        //         cout << arr[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        // cout << endl;
        if (l == 0) {
            break;
        }
        hour++;
    }
    cout << hour << endl;
    cout << tmp << endl;
    return 0;
} // main
