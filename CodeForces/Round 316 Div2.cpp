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

// Codeforces Round #316 (Div. 2)
// http://codeforces.com/contest/570

int main_B() {
    double n,m;
    cin >> n >> m;
    if(n==1) {
        cout << 1 << endl;
        return 0;
    }
    if(n==2) {
        cout << (m==1?2:1) << endl;
        return 0;
    }

    if(m < ceil((n/2.0)+0.2)) {
        m++;
        printf("%d\n",(int)m);
    }
    else {
        m--;
        printf("%d\n",(int)m);
    }

    return 0;
}

int main_A() {
    int n,m;
    cin >> n >> m;
    vector<int> a(n);
    REP(i,n) a[i] = 0;

    REP(i,m) {
        int ma = 0;
        int index = 0;
        REP(j,n) {
            int a;
            cin >> a;
            if(ma < a) {
                ma = a;
                index = j;
            }
        }
        a[index]++;
    }

    int ma2 = 0;
    int ans = 0;
    REP(i,n) {
        if(ma2 < a[i]) {
            ma2 = a[i];
            ans = i;
        }
    }
    cout << ans+1 << endl;
    return 0;
}
