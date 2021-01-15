#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int stack[100] = { 0 };
int top        = -1;

int
main()
{
    // freopen("stack.in", "r", stdin);
    // freopen("stack.out", "w", stdout);


    freopen("/Users/jschang/Documents/koi/onvit/stack/stack.in", "r", stdin);
    freopen("/Users/jschang/Documents/koi/onvit/stack/stack.out", "w", stdout);
    int n = 0;

    cin >> n;
    for (int i = 0; i < n; i++) {
        char c;
        cin >> c;
        if (c == 'i') {
            int x;
            cin >> x;
            stack[top + 1] = x;
            top++;
        } else if (c == 'o') {
            if (top == -1) {
                cout << "empty" << endl;
            } else {
                cout << stack[top] << endl;
                stack[top] = 0;
                top--;
            }
        } else if (c == 'c') {
            cout << top + 1 << endl;
        }
    }

    return 0;
} // main
