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

// No.207 世界のなんとか
// http://yukicoder.me/problems/560

int main() {
    int A,B;
    cin >> A >> B;
    for(int i=A; i<=B; i++) {
        if(i%3==0) {
            cout << i << endl;
            continue;
        }
        string s = to_string(i);
        REP(j,s.size()) {
            if(s[j]=='3') {
                cout << i << endl;
                goto next;
            }
        }
        next:;
    }
    return 0;
}
