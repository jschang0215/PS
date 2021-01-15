#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

void
f(int n, int k)
{
    if (k != 16) {
        if (n / k == 0) {
            cout << "(" << n % k;
            return;
        } else {
            f(n / k, k);
            cout << n % k;
        }
    } else {
        if (n / k == 0) {
            cout << "(";
            if (n % k == 10) cout << 'a';
            else if (n % k == 11) cout << 'b';
            else if (n % k == 12) cout << 'c';
            else if (n % k == 13) cout << 'd';
            else if (n % k == 14) cout << 'e';
            else if (n % k == 15) cout << 'f';
            else cout << n % k;
            return;
        } else {
            f(n / k, k);
            if (n % k == 10) cout << 'a';
            else if (n % k == 11) cout << 'b';
            else if (n % k == 12) cout << 'c';
            else if (n % k == 13) cout << 'd';
            else if (n % k == 14) cout << 'e';
            else if (n % k == 15) cout << 'f';
            else cout << n % k;
        }
    }
} // f

int
main()
{
    // freopen("b-06_06.in", "r", stdin);
    // freopen("b-06_06.out", "w", stdout);


    freopen("/Users/jschang/Documents/koi/onvit/b-06_06/b-06_06.in", "r", stdin);
    freopen("/Users/jschang/Documents/koi/onvit/b-06_06/b-06_06.out", "w", stdout);

    char c[100][1000];
    int i = 0;
    while (1) {
        scanf("%s", &c[i]);
        if (strcmp(c[i], "END") == 0) break;
        int len = strlen(c[i]);
        int digit = 1, n = 0;
        if (c[i][len - 2] == '1' && c[i][len - 1] == '6') {
            for (int j = len - 4; j > 0; j--) {
                int u = 0;
                if (c[i][j] == 'a') u = 10;
                else if (c[i][j] == 'b') u = 11;
                else if (c[i][j] == 'c') u = 12;
                else if (c[i][j] == 'd') u = 13;
                else if (c[i][j] == 'e') u = 14;
                else if (c[i][j] == 'f') u = 15;
                else u = c[i][j] - 48;
                n    += u * digit;
                digit = digit * 16;
            }
            f(n, 2);
            cout << ")2 ";
            f(n, 8);
            cout << ")8 ";
            f(n, 10);
            cout << ")10" << endl;
        } else if (c[i][len - 2] == '1' && c[i][len - 1] == '0') {
            for (int j = len - 4; j > 0; j--) {
                n    += (c[i][j] - 48) * digit;
                digit = digit * 10;
            }
            f(n, 2);
            cout << ")2 ";
            f(n, 8);
            cout << ")8 ";
            f(n, 16);
            cout << ")16" << endl;
        } else if (c[i][len - 1] == '8') {
            for (int j = len - 3; j > 0; j--) {
                n    += (c[i][j] - 48) * digit;
                digit = digit * 8;
            }
            f(n, 2);
            cout << ")2 ";
            f(n, 10);
            cout << ")10 ";
            f(n, 16);
            cout << ")16" << endl;
        } else if (c[i][len - 1] == '2') {
            for (int j = len - 3; j > 0; j--) {
                n    += (c[i][j] - 48) * digit;
                digit = (digit * 2);
            }
            f(n, 8);
            cout << ")8 ";
            f(n, 10);
            cout << ")10 ";
            f(n, 16);
            cout << ")16" << endl;
        } else {
            cout << "ERROR" << endl;
        }
        i++;
    }
    return 0;
} // main
