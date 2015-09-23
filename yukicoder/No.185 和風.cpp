#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
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

// No.185 ˜a•—
// http://yukicoder.me/problems/446

int main() {
    int N;
    cin >> N;
    int ans = -INF;
    REP(i,N) {
        int x,y;
        cin >> x >> y;
        if(ans != -INF && (y-x!=ans || y-x<=0)) {
            cout << "-1\n";
            return 0;
        }
        ans = y-x;
    }
    cout << ans << endl;
    return 0;
}
