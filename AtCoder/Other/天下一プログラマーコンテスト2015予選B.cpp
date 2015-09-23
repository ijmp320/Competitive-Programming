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

// 天下一プログラマーコンテスト2015予選B
// http://tenka1-2015-qualb.contest.atcoder.jp/assignments

int main_C_WA() {
    int MOD = 1000000007;
    int L;
    cin >> L;
    ll ans = 0;

    if(L<9) {
        cout << 0 << endl;
        return 0;
    }

    for(ll i=4; L>=(i+i+1); i++) {
        int a = i;
        int b = i-1;

        if(a+b+(b-1)>=L) ans += (L-(a+b)-1);
        else ans += ((b-1)-1);

        if(ans>=MOD) ans %= MOD;
    }
    cout << ans << endl;
    return 0;
}

int main_B() {
    string s;
    cin >> s;
    if(s=="{}") {
        cout << "dict" << endl;
        return 0;
    }
    else {
        int t=0;
        bool b=false;
        for(int i=0; i<s.size(); i++) {
            if(s[i]=='{') t++;
            if(s[i]=='}') t--;
            if(t==1 && s[i]==':') {
                b=true;
            }
        }
        if(b) {
            cout << "dict" << endl;
        }
        else {
            cout << "set" << endl;
        }
    }
    return 0;
}

int main_A() {
    int a = 100,b = 100,c = 200;
    int ans = 0;
    REP(i,17) {
        int t = (a+b+c);
        a = b;
        b = c;
        c = t;
    }
    cout << c << endl;
    return 0;
}

