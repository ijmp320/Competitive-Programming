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

// No.191 供託金
// http://yukicoder.me/problems/502

int main() {
    int N;
    cin >> N;
    double sum = 0;
    vector<int> c(N);
    REP(i,N) {
        cin >> c[i];
        sum += c[i];
    }
    int ans = 0;
    REP(i,N) {
        if((double)c[i] <= (sum/10.0)) {
            ans += 30;
        }
    }
    cout << ans << endl;
    return 0;
}
