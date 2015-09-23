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

// YUHA presents C88 “ä‰ð‚«~‹£‹ZƒvƒƒOƒ‰ƒ~ƒ“ƒO w‚ ‚é—EŽÒ‚Ì•¨Œêx
// http://yuha-c88.contest.atcoder.jp/assignments

int main_B() {
    int N;
    cin >> N;
    if(N%4==0) cout << "GO" << endl;
    else cout << "SEN" << endl;
    return 0;
}

int main_A() {
    int n;
    cin >> n;
    REP(i,n) {
        string a,b,c;
        cin >> a >> b >> c;
        switch (a[0]) {
            case 'B':
                putchar(c[0]);
                break;
            case 'E':
                putchar(c[c.size()-1]);
                break;
            case 'M':
                putchar(c[c.size()/2]);
                break;
        }
    }
    putchar('\n');
    return 0;
}
