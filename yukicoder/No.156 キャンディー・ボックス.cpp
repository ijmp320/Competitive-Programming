#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int,int> pint;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
const int INF = 100000000;
const int dx[4]={0,1,0,-1}, dy[4]={-1,0,1,0};
struct P{int x;int y;P(int X=0,int Y=0){x=X;y=Y;}};

// No.156 キャンディー・ボックス
// http://yukicoder.me/problems/307

int N, M;
vector<int> c;

int main() {
    cin >> N >> M;
    c.resize(N);
    rep(i,N) scanf("%d", &c[i]);
    sort(c.begin(),c.end());

    int sum = 0;
    rep(i,N) {
        sum += c[i];
        if(sum > M) {
            printf("%d\n",i);
            return 0;
        }
        else if(sum == M) {
            printf("%d\n", i+1);
            return 0;
        }
    }
    printf("%d\n",N);
    return 0;
}
