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

// 技術室奥プログラミングコンテスト
// http://tkppc.contest.atcoder.jp/assignments

int main_C() {
    int N,M,S;
    cin >> N >> M >> S;
    vector<pii> a(N);
    REP(i,N) {
        int T,K;
        cin >> T >> K;
        a[i] = MP(T,K);
    }
    sort(ALL(a));

    int m=0;
    int ans = 0;
    int c=0;
    REP(i,S) {
        if(a[c].F==i) {
            m += a[c].S;
            c++;
        }
        if(m>=M) {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}

int main_B() {
    int N;
    cin >> N;
    int ma = 0;
    int ans = 1;
    REP(i,N) {
        int a;
        cin >> a;
        if(ma<a) {
            ma = a;
            ans = i+1;
        }
    }
    cout << ans << endl;
    return 0;
}

int main_A() {
    int N;
    cin >> N;
    REP(i,N) {
        int a,b;
        cin >> a >> b;
        cout << a+b << endl;
    }
    return 0;
}

