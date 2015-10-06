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

// AtCoder Beginner Contest 027
// http://abc027.contest.atcoder.jp/assignments
 
int main_A() {
    int l1,l2,l3;
    cin >> l1 >> l2 >> l3;
    if(l1==l2) cout << l3 << endl;
    else if(l1==l3) cout << l2 << endl;
    else if(l2==l3) cout << l1 << endl;
    return 0;
}
