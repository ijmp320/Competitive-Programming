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

// Recursion / Divide and Conquer - Koch Curve
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_5_C&lang=jp

struct Point {
    double x;
    double y;
};

int n;

void rec(int k,Point p1, Point p2) {
    if(k==n) return;
    Point s,t,u;
    s.x = (2*p1.x+1*p2.x)/3.0;
    s.y = (2*p1.y+1*p2.y)/3.0;
    t.x = (1*p1.x+2*p2.x)/3.0;
    t.y = (1*p1.y+2*p2.y)/3.0;

    u.x = (t.x-s.x)*cos(M_PI/3.0) - (t.y-s.y)*sin(M_PI/3.0) + s.x;
    u.y = (t.x-s.x)*sin(M_PI/3.0) + (t.y-s.y)*cos(M_PI/3.0) + s.y;

    rec(k+1,p1,s);
    cout << s.x << " " << s.y << endl;
    rec(k+1,s,u);
    cout << u.x << " " << u.y << endl;
    rec(k+1,u,t);
    cout << t.x << " " << t.y << endl;
    rec(k+1,t,p2);
}

int main() {
    cin >> n;
    Point ps,pe;
    ps.x=0; ps.y=0;
    pe.x=100; pe.y=0;
    cout << "0 0" << endl;
    rec(0,ps,pe);
    cout << "100 0" << endl;
    return 0;
}
