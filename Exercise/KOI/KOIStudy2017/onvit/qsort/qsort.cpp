#include <iostream>
#include <stdio.h>
#include <string.h>
#include <algorithm>

using namespace std;

int
main()
{
    freopen("qsort.in", "r", stdin);
    freopen("qsort.out", "w", stdout);
    // freopen("/Users/jschang/Documents/koi/onvit/qsort/qsort.in", "r", stdin);
    // freopen("/Users/jschang/Documents/koi/onvit/qsort/qsort.out", "w", stdout);

    int arr[50001] = { 0 }, c = 0, n = 0;
    cin >> n;
    cin >> c;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    if (c == 1) {
        reverse(arr, arr + n);
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}
