#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
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

// Getting Started - Prime Numbers
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_1_C&lang=jp
 
bool isPrime(int n){
    if(n < 2) return false;
    else if(n == 2) return true;
    if(n % 2 == 0) return false;
    for(int i=3;i<=n/i;i+=2)
        if(n % i == 0) return false;
    return true;
}
 
int main() {
    int n;
    cin >> n;
    int ans = 0;
    REP(i,n) {
        int a;
        cin >> a;
        ans += isPrime(a);
    }
    cout << ans << endl;
    return 0;
}
