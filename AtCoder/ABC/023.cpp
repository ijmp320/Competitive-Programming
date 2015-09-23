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

// AtCoder Beginner Contest 023
// http://abc023.contest.atcoder.jp/assignments

int main_C_TLE() {
    int R,C,K,N;
    cin >> R >> C >> K >> N;
    vector<vector<bool> > c(C);
    REP(i,C) {
        c[i].resize(R);
        REP(j,R) c[i][j] = false;
    }

    vector<int> sum_r(R);
    vector<int> sum_c(C);

    REP(i,N) {
        int x,y;
        cin >> x >> y;
        c[y-1][x-1] = true;
        sum_r[x-1]++;
        sum_c[y-1]++;
    }

    ll ans = 0;
    REP(i,C) {
        if(sum_c[i] > K) continue;
        REP(j,R) {
            if(sum_c[i] + sum_r[j] - c[i][j] == K) {
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}

int main_B() {
    int N;
    string S;
    cin >> N >> S;
    if(!(N&1) || S[N/2]!='b') {
        cout << -1 << endl;
        return 0;
    }

    string s1 = "acb", s2 = "cab";
    int c = 0;
    int t = N/2;
    for(int i=1; i<N/2; i++) {
        if(S[t-i]!=s1[(i-1)%3] || S[t+i]!=s2[(i-1)%3]) {
            cout << -1 << endl;
            return 0;
        }
    }
    cout << (N-1)/2 << endl;
    return 0;
}

int main_A() {
    int x;
    cin >> x;
    cout << (x/10) + x-(x/10)*10 << endl;
    return 0;
}

