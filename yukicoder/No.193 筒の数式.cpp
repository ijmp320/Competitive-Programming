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

// No.193 筒の数式
// http://yukicoder.me/problems/461

int main() {
    string S;
    cin >> S;
    int len = S.size();
    ll ans = -INF;
    REP(i,len) {
        if(S[0]=='+' || S[0]=='-' || S[len-1]=='+' || S[len-1]=='-') {
            char a = S[0];
            REP(i,len-1) {
                S[i] = S[i+1];
            }
            S[len-1] = a;
            continue;
        }

        string tmp;
        queue<int> num;
        queue<char> en;
        REP(j,len) {
            if(S[j]=='+') {
                int n = atoi(tmp.c_str());
                num.push(n);
                tmp="";
                en.push('+');
            }
            else if(S[j]=='-') {
                int n = atoi(tmp.c_str());
                num.push(n);
                tmp="";
                en.push('-');
            }
            else {
                tmp += S[j];
            }
        }
        int n = atoi(tmp.c_str());
        num.push(n);

        ll t=num.front(); num.pop();
        while(true) {
            ll b = num.front(); num.pop();
            char c = en.front(); en.pop();
            if(c=='+') t += b;
            else if(c=='-') t -= b;

            if(num.empty()) break;
        }
        ans = max(ans, t);

        char a = S[0];
        REP(i,len-1) {
            S[i] = S[i+1];
        }
        S[len-1] = a;
    }
    cout << ans << endl;
    return 0;
}
