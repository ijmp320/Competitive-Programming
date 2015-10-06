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

// AtCoder Regular Contest 040
// http://arc040.contest.atcoder.jp/assignments

int main() {
    int n,takahashi=0,aoki=0;
    cin >> n;
    REP(i,n) {
        string s;
        cin >> s;
        REP(j,n) {
            if(s[j]=='R') takahashi++;
            else if(s[j]=='B') aoki++;
        }
    }
    if(takahashi==aoki) cout << "DRAW" << endl;
    else cout << (takahashi > aoki ? "TAKAHASHI":"AOKI") << endl;
    return 0;
}
