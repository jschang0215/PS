#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int n = 0, tall[1000] = { 0 };
int a[65000] = { 0 };

int
main()
{
    freopen("theatre.in", "r", stdin);
    freopen("theatre.out", "w", stdout);
    // freopen("/Users/jschang/Documents/koi/onvit/theatre/theatre.in", "r", stdin);
    // freopen("/Users/jschang/Documents/koi/onvit/theatre/theatre.out", "w", stdout);

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> tall[i];
    }
    a[n - 1] = 0;
    int max_e = 0;
    for (int i = n - 2; i >= 0; i--) {
        int x = 0;
        for (int j = i + 1; j < n; j++) {
            if (tall[i] <= tall[j]) {
                x = a[j] + 1;
                if (x > a[i]) {
                    a[i] = x;
                }
            }
        }
        if (a[i] > max_e) {
            max_e = a[i];
        }
    }
    cout << max_e + 1 << endl;
    return 0;
}
