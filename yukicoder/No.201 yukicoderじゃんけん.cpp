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

// No.201 yukicoderじゃんけん
// http://yukicoder.me/problems/436

int main() {
    string sa,sb,xa,xb,pa,pb;
    cin >> sa >> pa >> xa >> sb >> pb >> xb;
    if(pa.size()>pb.size()) cout << sa << endl;
    else if(pa.size()<pb.size()) cout << sb << endl;
    else {
        REP(i,pa.size()) {
            if(pa[i]!=pb[i]) {
                cout << ((pa[i]-'0')>(pb[i]-'0')?sa:sb) << endl;
                return 0;
            }
        }
        cout << -1 << endl;
    }
    return 0;
}
