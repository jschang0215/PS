#include <iostream>

using namespace std;

int main() {
    int n, arr[15]={0}, i=0;
    cin >> n;
    while(n>0) {
        int x;
        x=n%10;
        arr[i]=x;
        i++;
        n/=10;
    }
    for(int j=i-1; j>=0; j--) {
        switch (arr[j]) {
            case 0:
                cout << "영";
                break;
            case 1:
                cout << "일";
                break;
            case 2:
                cout << "이";
                break;
            case 3:
                cout << "삼";
                break;
            case 4:
                cout << "사";
                break;
            case 5:
                cout << "오";
                break;
            case 6:
                cout << "육";
                break;
            case 7:
                cout << "칠";
                break;
            case 8:
                cout << "팔";
                break;
            case 9:
                cout << "구";
                break;
        }
    }
}
