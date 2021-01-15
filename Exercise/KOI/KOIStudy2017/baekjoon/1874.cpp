#include <iostream>

using namespace std;

int
main()
{
    int top = 0, stack[100000] = { 0 }, s_id = 0, a_id = 0, num = 1;
    char ans[100000];
    int n;
    int sw = 0;

    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x > top) {
            for (int j = top; j < x; j++) {
                stack[s_id] = j + 1;
                ans[a_id]   = '+';
                s_id++;
                a_id++;
            }
        } else {
            if (stack[s_id - 1] != x) {
                cout << "NO" << endl;
                return 0;
            }
        }
        s_id--;
        ans[a_id] = '-';
        a_id++;
        if (x > top) top = x;
    }
    if (sw == 1) {
        cout << "NO" << endl;
        return 0;
    }
    for (int i = 0; i < a_id; i++) {
        cout << ans[i] << endl;
    }
    return 0;
} // main
