#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define FOR(i,a,n) for(int i=a;i<(int)(n);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(a) (a).begin(),(a).end()
#define MP(a,b) make_pair(a,b)
#define PB(a) push_back(a)
#define F first
#define S second
const int INF = 2000000000;
const int DX[4]={0,1,0,-1}, DY[4]={-1,0,1,0};
struct P{int x;int y;P(int X=0,int Y=0){x=X;y=Y;}};

// No.203 ゴールデン・ウィーク(1)
// http://yukicoder.me/problems/526

int main() {
    string w1,w2;
    cin >> w1;
    cin >> w2;
    w1 += w2;
    int ans = 0;
    int count = 0;
    FOR(i,0,14) {
        if(w1[i]=='x') {
            ans = max(ans, count);
            count = 0;
        }
        if(w1[i]=='o') count++;
    }
    ans = max(ans,count);
    cout << ans << endl;
    return 0;
}
