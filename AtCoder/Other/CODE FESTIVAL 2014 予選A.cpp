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

// CODE FESTIVAL 2014 —\‘IA
// http://code-festival-2014-quala.contest.atcoder.jp/assignments

int geturu(ll X) {
    int ret = X/4;
    ret -= (X/100);
    ret += (X/400);
    return ret;
} 
int main_C() {
    ll A,B;
    cin >> A >> B;
    cout << geturu(B)-geturu(A-1) << endl;
    return 0;
}

int main_B() {
    string s;
    int n;
    cin >> s >> n;
    int a = s.size();
    if(n%a!=0) cout << s[n%a-1] << endl;
    else cout << s[a-1] << endl;
    return 0;
}

int main_A() {
    string s;
    cin >> s;
    cout << s + "2014" << endl;
    return 0;
}
