#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

int check_data[6] = { 0 };
int arr[6][6]     =
{ 0,   100, 58, 69, 8,  105, 100, 0, 59, 48, 110, 88,
  58,
  59,
  0,   28,
  62,  65,
  69,
  48,  28,
  0,   74,
  52,  8,
  110, 62,
  74,  0,
  108, 105, 88, 65, 52, 108, 0 };

char reg[6][4] = { "SEO", "BUS", "DAE", "MAS", "INC", "KWA" };

int
min_element(int s)
{
    int min = 500;
    int id  = 0;

    for (int i = 0; i < 6; i++) {
        if (arr[s][i] < min && check_data[i] == 0) {
            min = arr[s][i];
            id  = i;
        }
    }
    check_data[id] = 1;
    return id;
}

void
clear_check()
{
    for (int i = 0; i < 6; i++) {
        check_data[i] = 0;
    }
}

int
main()
{
    freopen("/Users/jschang/Documents/koi/onvit/b-03_07/b-03_07.in", "r", stdin);
    freopen("/Users/jschang/Documents/koi/onvit/b-03_07/b-03_07.out", "w", stdout);
    int start = 0;
    char c[10];

    while (1) {
        clear_check();
        scanf("%s", &c);
        if (strcmp(c, "N") == 0) break;
        else if (strcmp(c, "SEO") == 0) start = 0;
        else if (strcmp(c, "BUS") == 0) start = 1;
        else if (strcmp(c, "DAE") == 0) start = 2;
        else if (strcmp(c, "MAS") == 0) start = 3;
        else if (strcmp(c, "INC") == 0) start = 4;
        else if (strcmp(c, "KWA") == 0) start = 5;
        else start = -1;
        if (start != -1) {
            int tmp;
            tmp = start;
            printf("%s ", reg[tmp]);

            check_data[tmp] = 1;
            int mon = 0;
            for (int i = 0; i < 5; i++) {
                int t = 0;
                t = min_element(tmp);
                printf("%d %s ", arr[tmp][t], reg[t]);
                mon += arr[tmp][t];
                tmp  = t;
            }
            printf("%d %s ", arr[start][tmp], reg[start]);
            mon += arr[start][tmp];
            printf("%d\n", mon);
        }
        char a[10];
        scanf("%s", &a);
        if (strcmp(a, "N") == 0) {
            break;
        }
    }
    return 0;
} // main
