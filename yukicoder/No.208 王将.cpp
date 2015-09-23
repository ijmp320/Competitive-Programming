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

// No.208 王将
// http://yukicoder.me/problems/487

int main() {
    int x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int ans = max(abs(x1),abs(y1));
    if(abs(x1) == abs(y1) && abs(x2) == abs(y2) && x1*x2>0 && y1*y2>0) {
        int x=0,y=0;
        int dx = x1/abs(x1),dy = y1/abs(y1);
        for(int i=0; i<x1; i++) {
            if(x==x2 && y==y2) {
                ans++;
                break;
            }
            x += dx;
            y += dy;
        }
    }
    cout << ans << endl;
    return 0;
}
