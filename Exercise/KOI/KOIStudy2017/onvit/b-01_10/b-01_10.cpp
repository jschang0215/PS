#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;
int
main()
{
    freopen("b-01_10.in", "r", stdin);
    freopen("b-01_10.out", "w", stdout);


    // freopen("/Users/jschang/Documents/koi/onvit/b-01_10/b-01_10.in", "r", stdin);
    // freopen("/Users/jschang/Documents/koi/onvit/b-01_10/b-01_10.out", "w", stdout);

    char arr[14][10] =
    { "HABIT",   "HAIR",  "HELLOO", "HEAD", "HEADACHE", "HEADY", "HIDE", "HIGH", "HIGHWAY", "HOLD", "HIGHLIGHT",
      "HISTORY", "HOBBY", "HOLIDAY" };
    char c[15];
    int len = 0;
    cin >> c;
    len = strlen(c);

    if (len > 9) {
        cout << "NOT FOUND" << endl;
        return 0;
    }

    int t = 0;
    for (int i = 0; i < 14; i++) {
        int flag = 0;
        if (strlen(arr[i]) > len - 1) {
            for (int j = 0; j < (strlen(arr[i]) - len + 1); j++) {
                for (int k = 0; k < len; k++) {
                    if (c[k] == '?') {
                        flag++;
                    } else if (c[k] == arr[i][j + k]) {
                        flag++;
                    }
                }
                if (flag == len) {
                    cout << arr[i] << endl;
                    t = 1;
                    break;
                } else {
                    flag = 0;
                }
            }
        }
    }
    if (t == 0) {
        cout << "NOT FOUND" << endl;
    }
    return 0;
} // main
