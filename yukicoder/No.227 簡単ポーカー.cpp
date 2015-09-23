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

// No.227 簡単ポーカー
// http://yukicoder.me/problems/562

int main() {
    vector<int> c(14,0);
    int f = 0;
    queue<int> p;

    REP(i,5) {
        int a;
        cin >> a;
        if(c[a]==1) {
            f++;
            p.push(a);
        }
        c[a]++;
    }

    if(f==0) cout << "NO HAND" << endl;
    else if(f==1) {
        if(c[p.front()]==2) cout << "ONE PAIR" << endl;
        else if(c[p.front()]==3)cout << "THREE CARD" << endl;
        else cout << "NO HAND" << endl;
    }
    else {
        int a,b;
        a = p.front(); p.pop();
        b = p.front(); p.pop();
        if(c[a]==2 && c[b]==2) cout << "TWO PAIR" << endl;
        else cout << "FULL HOUSE" << endl;
    }

    return 0;
}
