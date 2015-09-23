#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int,int> pint;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
const int INF = 100000000;
const int dx[4]={0,1,0,-1}, dy[4]={-1,0,1,0};
struct P{int x;int y;P(int X=0,int Y=0){x=X;y=Y;}};

// No.161 制限ジャンケン
// http://yukicoder.me/problems/252

int G,C,P;
string s;

int main() {
    char buf[301];
    cin >> G >> C >> P >> buf;
    s = buf;

    int ans = 0;
    sort(s.begin(), s.end());   // C G P
    rep(i,s.size()) {
        if(s[i] == 'C') {
            if(G > 0) {
                G--;
                ans += 3;
                s[i] = '#';
            }
        }
        else if(s[i] == 'G') {
            if(P > 0) {
                P--;
                ans += 3;
                s[i] = '#';
            }
        }
        else {
            if(C > 0) {
                C--;
                ans += 3;
                s[i] = '#';
            }
        }
    }

    rep(i,s.size()) {
        if(s[i] == '#') continue;
        if(s[i] == 'C') {
            if(C > 0) {
                C--;
                ans += 1;
                s[i] = '#';
            }
        }
        else if(s[i] == 'G') {
            if(G > 0) {
                G--;
                ans += 1;
                s[i] = '#';
            }
        }
        else {
            if(P > 0) {
                P--;
                ans += 1;
                s[i] = '#';
            }
        }
    }

    cout << ans << endl;
    return 0;
}
