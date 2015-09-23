#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int,int> pint;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
const int INF = 100000000;
const int dx[4]={0,1,0,-1}, dy[4]={-1,0,1,0};
struct P{int x;int y;P(int X=0,int Y=0){x=X;y=Y;}};

// No.159 éhÇ≥ÇÁÇ»Ç¢USB
// http://yukicoder.me/problems/405

int main() {
    double p,q;
    cin >> p >> q;

    double P1=0,P2=0;
    P1 = (1-p) * (q); // ó†Å®ï\
    P2 = p * (1-q) * q;

    if(P1 < P2) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
