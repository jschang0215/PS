#include <iostream>
#include <stdio.h>
#include <string.h>
#include <algorithm>

using namespace std;

int n = 0, arr[30][30] = { 0 };
int dangi = 1, house[500] = { 0 };

void
dfs(int i, int j)
{
    house[dangi]++;
    arr[i][j] = -1;
    if (j < n && arr[i][j + 1] == 1) {
        dfs(i, j + 1);
    }
    if (j > 0 && arr[i][j - 1] == 1) {
        dfs(i, j - 1);
    }
    if (i < n && arr[i + 1][j] == 1) {
        dfs(i + 1, j);
    }
    if (i > 0 && arr[i - 1][j] == 1) {
        dfs(i - 1, j);
    }
}

int
main()
{
    freopen("map.in", "r", stdin);
    freopen("map.out", "w", stdout);
    // freopen("/Users/jschang/Documents/koi/onvit/map/map.in", "r", stdin);
    // freopen("/Users/jschang/Documents/koi/onvit/map/map.out", "w", stdout);
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j] == 1) {
                dfs(i, j);
                dangi++;
            }
        }
    }
    sort(house, house + (dangi));
    cout << dangi - 1 << endl;
    for (int i = 1; i < dangi; i++) {
        cout << house[i] << endl;
    }
    return 0;
}
