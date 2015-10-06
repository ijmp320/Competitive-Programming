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

// AtCoder Beginner Contest 022
// http://abc022.contest.atcoder.jp/assignments

int main_B() {
	int N;
	set<int> s;
	int ans = 0;
	cin >> N;
	REP(i,N) {
		int a;
		cin >> a;
		if(s.find(a)!=s.end()) ans++;
		s.insert(a);
	}
	cout << ans << endl;
	return 0;
}

int main_A() {
	int N,S,T,W;
	cin >> N >> S >> T >> W;
	int ans = (W >= S && W <= T);
	REP(i,N-1) {
		int a;
		cin >> a;
		W += a;
		ans += (W >= S && W <= T);
	}
	cout << ans << endl;
	return 0;
}
