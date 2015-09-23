#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,n) for(int i=a;i<(int)(n);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(a) (a).begin(),(a).end()
#define MP(a,b) make_pair(a,b)
#define PB(a) push_back(a)
const int INF = 1e9;

// Codeforces Round #317 [AimFund Thanks-Round] (Div. 2)
// http://codeforces.com/contest/572

int main() {
    int a,b,c,l;
    cin >> a >> b >> c >> l;
    if(a<b) swap(a,b);
    if(a<c) swap(a,c);
    if(b<c) swap(b,c);

    if(a>=b+c+l) {
        cout << 0 << endl;
        return 0;
    }

    int ans = 0;
    if(a>b+c) {
        ans += (a-b+c+1);
    }
    return 0;
}

int main_B() {
    int n,s;
    cin >> n >> s;
    map<int,int> ps,pb;
    REP(i,n) {
        char c;
        int p,q;
        cin >> c >> p >> q;
        if(c=='B') {
            if(pb.find(p)==pb.end()) pb.insert(MP(p,q));
            else pb[p]+=q;
        }
        else {
            if(ps.find(p)==ps.end()) ps.insert(MP(p,q));
            else ps[p]+=q;
        }
    }

    int c=0;
    int t=ps.size();
    for(auto itr = ps.rbegin();itr != ps.rend(); c++,itr++) {
        if(c<t-s) continue;
        cout << "S " << (*itr).first << " " << (*itr).second << endl;
    }
    c=0;
    for(auto itr = pb.rbegin(); c<s; c++,itr++) {
        if(itr == pb.rend()) break;
        cout << "B " << (*itr).first << " " << (*itr).second << endl;
    }

    return 0;
}

int main_A() {
    int A,B,k,m;
    cin >> A >> B >> k >> m;
    vector<int> a(A),b(B);
    REP(i,A) cin >> a[i];
    REP(i,B) cin >> b[i];
    if(a[k-1]<b[b.size()-m]) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}

