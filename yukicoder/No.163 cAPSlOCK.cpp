#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int,int> pint;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
const int INF = 100000000;
const int dx[4]={0,1,0,-1}, dy[4]={-1,0,1,0};
struct P{int x;int y;P(int X=0,int Y=0){x=X;y=Y;}};

// No.163 cAPSlOCK
// http://yukicoder.me/problems/339

int main() {
    char str[101];
    cin >> str;
    for(int i=0;str[i]!=0;i++){
        if(str[i]>='A' && str[i]<='Z' ) {
            str[i]+=0x20;
        }
        else if(str[i]>='a' && str[i]<='z' ) {
            str[i]-=0x20;
        }
        putchar(str[i]);
    }
    putchar('\n');
    return 0;
}
