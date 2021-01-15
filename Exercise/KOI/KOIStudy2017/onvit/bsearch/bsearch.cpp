#include <iostream>
#include <stdio.h>

using namespace std;

int len = 0, arr[500000] = { 0 };
int s = 0, l;

int
bsearch(int find_num, int n)
{
    if (find_num > arr[n]) {
        if (s == n) return 0;

        s = n;
        return bsearch(find_num, ((s + l) / 2));
    } else if (find_num < arr[n]) {
        if (l == n) return 0;

        l = n;
        return bsearch(find_num, ((s + l) / 2));
    } else if (find_num == arr[n]) {
        return (n + 1);
    }
}

int
main()
{
    freopen("bsearch.in", "r", stdin);
    freopen("bsearch.out", "w", stdout);

    int item      = 0;
    int f[100000] = { 0 };

    // freopen("/Users/jschang/Documents/koi/onvit/bsearch/bsearch.in", "r", stdin);
    // freopen("/Users/jschang/Documents/koi/onvit/bsearch/bsearch.out", "w", stdout);
    cin >> len;
    l = len;
    for (int i = 0; i < len; i++) {
        cin >> arr[i];
    }
    cin >> item;
    for (int i = 0; i < item; i++) {
        s = 0;
        l = len;
        cin >> f[i];
        cout << bsearch(f[i], (len) / 2) << endl;
    }
    return 0;
}
