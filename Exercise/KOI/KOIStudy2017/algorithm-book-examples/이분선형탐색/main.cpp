#include <iostream>
#include <stdio.h>

using namespace std;

int n=0, X[1000]={0}, k=0;

int input()
{
    cin >> n;
    for(int i=0; i<n; i++) {
        scanf("%d", &X[i]);
    }
    cin >> k;
    return 0;
}

int search_k(int y)
{
    int s=0, e=0;
    e=y;
    while(e!=s)
    {
        s=(int)((s+e)/2);
        if(X[s]==k)
        {
            cout << s+1;
            return s+1;
        }
        if(X[s]<k)
        {
            s=s+1;
        } else
        {
            e=e-1;
        }
    }
    cout << "-1";
    return 0;
}

int main()
{
    input();
    search_k(n);
    return 0;
}
