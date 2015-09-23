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

// Codeforces Round #310 (Div. 2)
// http://codeforces.com/contest/556

int main() {
    int n,k;
    cin >> n >> k;
    vector<vector<int>> a(k);

    int ans = 0;
    REP(i,k) {
        int m;
        cin >> m;
        a[i].resize(m);
        REP(j,m) cin >> a[i][j];

        vector<int> b;
        b.PB(0);
        FOR(j,1,m) {
            if(a[i][j-1]+1 != a[i][j]) {
                b.PB(j);
                ans++;
            }
        }

        REP(j,b.size()-1) {
            vector<int> c;
            int size = b[j+1] - b[j];
            for(int l=0; l<size; l++) {
                c.PB(a[i][j+l]);
            }
            a.PB(c);
        }
    }
    cout << (ans+a.size()-1) << endl;
    return 0;
}

int mainB() {
    int n;
    cin >> n;
    vector<int> a(n);
    REP(i,n) cin >> a[i];

    for(int k=0; k<=n; k++) {
        bool f=false;
        REP(i,n) {
            if(i!=a[i]) {
                f=true;
                break;
            }
        }
        if(!f) {
            cout << "Yes" << endl;
            return 0;
        }

        REP(i,n) {
            if((i&1)==1) {
                a[i]--;
                if(a[i]==-1) a[i]=n-1;
            }
            else {
                a[i]++;
                if(a[i]==n) a[i]=0;
            }
        }
    }
    cout << "No" << endl;
    return 0;
}

int main_A() {
    int n;
    string s;
    cin >> n >> s;
    int zero=0,one=0;
    REP(i,n) {
        if(s[i]=='0') zero++;
        else one++;
    }
    cout << abs(zero-one) << endl;
    return 0;
}

