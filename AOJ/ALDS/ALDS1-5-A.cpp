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

// Recursion / Divide and Conquer - Exhaustive Search
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_5_A&lang=jp

bool dp[21][3000];
int main() {
    memset(dp,false,sizeof(dp));

    int n,q;
    cin >> n;
    vector<int> A(n);
    REP(i,n) cin >> A[i];

    dp[0][0] = true;
    for(int i=0; i<n; i++) {
        for(int j=0; j<3000; j++) {
            if(dp[i][j]) {
                dp[i+1][j] = true;
                if(j+A[i]<3000) dp[i+1][j+A[i]] = true;
            }
        }
    }

    cin >> q;
    REP(i,q) {
        int m;
        cin >> m;
        cout << (dp[n][m]?"yes":"no") << endl;
    }
    return 0;
}
