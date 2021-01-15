#include <iostream>
#include <stdio.h>
#include <string.h>
#include <algorithm>

using namespace std;

int arr[10][10] = { 0 }, n = 0;
int x_max           = 0;
int max_arr[10][10] = { 0 };
int c_arr[10][10]   = { 0 };

void
copy_arr()
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            max_arr[i][j] = arr[i][j];
        }
    }
}

void
clear_arr()
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = c_arr[i][j];
        }
    }
}

void
dfs(int i, int j, int x)
{
    arr[i][j] = 3;
    if (i == n - 1 && j == n - 1) {
        // if (arr[i][j] == 2) x++;
        if (x > x_max) {
            copy_arr();
            x_max = x;
            return;
            // clear_arr();
        }
    }
    if (i < n - 1 && arr[i + 1][j] == 0) {
        dfs(i + 1, j, x);
        arr[i + 1][j] = 0;
    }
    if (j < n - 1 && arr[i][j + 1] == 0) {
        dfs(i, j + 1, x);
        arr[i][j + 1] = 0;
    }
    if (i > 0 && arr[i - 1][j] == 0) {
        dfs(i - 1, j, x);
        arr[i - 1][j] = 0;
    }
    if (j > 0 && arr[i][j - 1] == 0) {
        dfs(i, j - 1, x);
        arr[i][j - 1] = 0;
    }
    if (i < n - 1 && arr[i + 1][j] == 2) {
        dfs(i + 1, j, x + 1);
        arr[i + 1][j] = 2;
    }
    if (j < n - 1 && arr[i][j + 1] == 2) {
        dfs(i, j + 1, x + 1);
        arr[i][j + 1] = 2;
    }
    if (i > 0 && arr[i - 1][j] == 2) {
        arr[i - 1][j] = 3;
        dfs(i - 1, j, x + 1);
        arr[i - 1][j] = 2;
    }
    if (j > 0 && arr[i][j - 1] == 2) {
        arr[i][j - 1] = 3;
        dfs(i, j - 1, x + 1);
        arr[i][j - 1] = 2;
    }
} // dfs

int
main()
{
    freopen("miro.in", "r", stdin);
    freopen("miro.out", "w", stdout);
    // freopen("/Users/jschang/Documents/koi/onvit/miro/miro.in", "r", stdin);
    // freopen("/Users/jschang/Documents/koi/onvit/miro/miro.out", "w", stdout);

    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> c_arr[i][j];
        }
    }
    clear_arr();
    dfs(0, 0, 0);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << max_arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << x_max << endl;
    return 0;
}
