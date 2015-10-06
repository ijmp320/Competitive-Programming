#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
typedef pair<int,int> pint;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define m_p(a,b) make_pair(a,b)
#define p_b(a,b) push_back(a,b)
const int INF = 100000000;
const int dx[4]={0,1,0,-1}, dy[4]={-1,0,1,0};
struct P{int x;int y;P(int X=0,int Y=0){x=X;y=Y;}};

// No.166 マス埋めゲーム
// http://yukicoder.me/problems/380

int main() {
    ull H,W,N,K;
    cin >> H >> W;
    cin >> N >> K;
    if(N == K) K = 0;
    ull t = H*W % N;
    if(t == K) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
