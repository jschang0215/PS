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
        if(arr[j]!=0) {
            if(j==1) cout << "십";
            if(j==2) cout << "백";
            if(j==3) cout << "천";
            if(j==5) cout << "십";
            if(j==6) cout << "백";
            if(j==7) cout << "천";

        }
        else if(i==9 && arr[4]==0 && arr[5]==0 && arr[6]==0 && arr[7]==0) {
            continue;
        }

        if(j==4) cout << "만";
        if(j==8) cout << "억";

    }
}
