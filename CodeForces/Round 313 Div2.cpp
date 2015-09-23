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

// Codeforces Round #313 (Div. 2)
// http://codeforces.com/contest/560

bool rec(string a, string b) {
    if(a.size()!=b.size()) return false;
    if(a==b) {
        return true;
    }
    if(a.size()%2==1 || b.size()%2==1) {
        return false;
    }

    string a1,a2,b1,b2;
    int t = a.size()/2;
    REP(i,t) {
        a1.PB(a[i]);
        a2.PB(a[t+i]);
        b1.PB(b[i]);
        b2.PB(b[t+i]);
    }

    return ((rec(a1,b1) && rec(a2,b2))||(rec(a1,b2) && rec(a2,b1)));
}

int main_D_WA() {
    string a,b;
    cin >> a >> b;
    if(rec(a,b)==true) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}

ll getTriSum(int n) {
    return n*n;
}
int main_C() {
    vector<int> a(6);
    REP(i,6) cin >> a[i];

    ll t = getTriSum(a[1]+a[2]+a[3]);
    ll t1 = getTriSum(a[5]);
    ll t2 = getTriSum(a[1]);
    ll t3 = getTriSum(a[3]);
    ll ans = t - t1 - t2 - t3;
    cout << ans << endl;
    return 0;
}

int main_B() {
    int a1,b1,a2,b2,a3,b3;
    cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;
    if(a1<b1) swap(a1,b1);
    if(a2<b2) swap(a2,b2);
    if(a3<b3) swap(a3,b3);

    if(a1*b1<(a2*b2+a3*b3) || a2>a1 || a3>a1) {
        cout << "NO" << endl;
        return 0;
    }

    int t2 = a2, t3 = a3;
    int s2 = b2, s3 = b3;

    if(a2+a3<=a1 && max(b2,b3)<=b1) {
        cout << "YES" << endl;
        return 0;
    }
    swap(a2,b2);
    if(a2+a3<=a1 && max(b2,b3)<=b1) {
        cout << "YES" << endl;
        return 0;
    }
    swap(a2,b2);
    swap(a3,b3);
    if(a2+a3<=a1 && max(b2,b3)<=b1) {
        cout << "YES" << endl;
        return 0;
    }
    swap(a2,b2);
    if(a2+a3<=a1 && max(b2,b3)<=b1) {
        cout << "YES" << endl;
        return 0;
    }
    a2 = t2; a3 = t3;
    b2 = s2; b3 = s3;
    swap(a1,b1);
    if(a2+a3<=a1 && max(b2,b3)<=b1) {
        cout << "YES" << endl;
        return 0;
    }
    swap(a2,b2);
    if(a2+a3<=a1 && max(b2,b3)<=b1) {
        cout << "YES" << endl;
        return 0;
    }
    swap(a2,b2);
    swap(a3,b3);
    if(a2+a3<=a1 && max(b2,b3)<=b1) {
        cout << "YES" << endl;
        return 0;
    }
    swap(a2,b2);
    if(a2+a3<=a1 && max(b2,b3)<=b1) {
        cout << "YES" << endl;
        return 0;
    }

    cout << "NO" << endl;
    return 0;
}

int main_A() {
    int n;
    cin >> n;
    vector<int> a(n);
    REP(i,n) {
        cin >> a[i];
    }
    sort(ALL(a));

    if(find(ALL(a),1)!=a.end()) {
        cout << -1 << endl;
        return 0;
    }
    else {
        cout << 1 << endl;
        return 0;
    }

    return 0;
}

