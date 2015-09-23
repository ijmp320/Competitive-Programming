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

// AtCoder Regular Contest 039
// http://arc039.contest.atcoder.jp/assignments

int main_A() {
    int A,B;
    cin >> A >> B;
    int ans = A-B;
    if(A<900) ans = max(ans,((9-(A/100))*100)+A - B);
    else if(A<990) ans = max(ans,(99-(A/10))*10+A - B);
    else if(A<999) ans = max(ans,999 - B);

    if(B>=200) ans = max(ans, A - (B-((B/100)-1)*100));
    else if(B>=110) ans = max(ans, A - (B-((B/10)-10)*10));
    else if(B>=101) ans = max(ans, A - 100);
    cout << ans << endl;
    return 0;
}

