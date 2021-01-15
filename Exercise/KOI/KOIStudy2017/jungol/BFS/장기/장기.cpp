#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int a[101][101] = { 0 };
int r, c, s, k;
int n = 0, m = 0;
int min_x = 999999;

void
bfs(int i, int j, int x)
{
    if (i > n || j > m || i < 0 || j < 0 || a[i][j] == -1) {
        return;
    } else {
        if (a[i][j] == 1) {
            for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= m; j++) {
                    cout << a[i][j] << " ";
                }
                cout << endl;
            }
            cout << endl;
            if (x < min_x) min_x = x;
        } else {
            a[i][j] = -1;

            if (i > 2 && j < m) {
                bfs(i - 2, j + 1, x + 1);
                a[i][j] = 0;
            }
            if (i > 2 && j > 1) {
                bfs(i - 2, j - 1, x + 1);
                a[i][j] = 0;
            }
            if (i < n - 1 && j < m) {
                bfs(i + 2, j + 1, x + 1);
                a[i][j] = 0;
            }
            if (i < n - 1 && j > 1) {
                bfs(i + 2, j - 1, x + 1);
                a[i][j] = 0;
            }

            if (j > 2 && i < n) {
                bfs(i + 1, j - 2, x + 1);
                a[i][j] = 0;
            }
            if (j > 2 && i > 1) {
                bfs(i - 1, j - 2, x + 1);
                a[i][j] = 0;
            }
            if (j < m - 1 && i < n) {
                bfs(i + 1, j + 2, x + 1);
                a[i][j] = 0;
            }
            if (j < m - 1 && i > 1) {
                bfs(i - 1, j + 2, x + 1);
                a[i][j] = 0;
            }
        }
    }
} // bfs

int
main()
{
    cin >> n >> m;
    cin >> r >> c >> s >> k;
    a[s][k] = 1;
    bfs(r, c, 0);
    cout << min_x << endl;
    return 0;
} // main
