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

// Golden Week Contest 2015
// http://gwcontest2015.contest.atcoder.jp/assignments

int s[]={25,39,51,76,163,111,136,128,133,138};
 
vector<int> rec(int i) {
    vector<int> a;
    a.PB(0);
    if(i==9) {
        a.PB(s[i]);
        return a;
    }
    if(i==6) {
        a = rec(i+1);
        vector<int> b = a;
        b.PB(s[i]);
        REP(j,a.size()) {
            b.PB(a[j]+58);
            b.PB(a[j]+136);
        }
        return b;
    }
    else {
        a = rec(i+1);
        vector<int> b = a;
        b.PB(s[i]);
        REP(j,a.size()) {
            b.PB(a[j]+s[i]);
        }
        return b;
    }
    return a;
}
 
int main() {
    vector<int> ans = rec(0);
    set<int> se;
    se.insert(0);
    REP(i,ans.size()) {
        se.insert(ans[i]);
    }
    // sort(ALL(se));
    for(auto i=se.begin(); i!=se.end(); i++) cout << (*i) << endl;
    return 0;
}