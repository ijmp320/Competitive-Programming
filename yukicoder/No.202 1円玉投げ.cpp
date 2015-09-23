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

// No.202 1円玉投げ
// http://yukicoder.me/problems/476

bool p[20001][20001];
int main() {
    memset(p,false,sizeof(p));
    int N;
    cin >> N;
    ll ans = 0;
    REP(i,N) {
        int x,y;
        cin >> x >> y;
        bool f=true;
        FOR(a,y-30,y+30) {
            FOR(b,x-30,x+30) {
                if(a>=0 && a<=20000 && b>=0 && b<=20000 && p[a][b]) {
                    double d = sqrt(pow((double)(y-a),2.0)+pow((double)(x-b),2.0));
                    if(d<20.0) {
                        f=false;
                        goto next;
                    }
                }
            }
        }
        next:;
        if(f) {
            ans++;
            p[y][x]=true;
        }
    }
    cout << ans << endl;
    return 0;
}
