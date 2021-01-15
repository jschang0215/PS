#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int queue[100] = { 0 };
int tail       = -1;
int head       = 0;

int
main()
{
    freopen("queue.in", "r", stdin);
    freopen("queue.out", "w", stdout);


    // freopen("/Users/jschang/Documents/koi/onvit/queue/queue.in", "r", stdin);
    // freopen("/Users/jschang/Documents/koi/onvit/queue/queue.out", "w", stdout);
    int n = 0;

    cin >> n;
    for (int i = 0; i < n; i++) {
        char c;
        cin >> c;
        if (c == 'i') {
            int x;
            cin >> x;
            queue[tail + 1] = x;
            tail++;
        } else if (c == 'o') {
            if (tail < head) {
                cout << "empty" << endl;
            } else {
                cout << queue[head] << endl;
                // queue[head + 1] = 0;
                head++;
            }
        } else if (c == 'c') {
            cout << tail - head + 1 << endl;
        }
    }

    return 0;
} // main
