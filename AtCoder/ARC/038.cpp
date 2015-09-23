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

// AtCoder Regular Contest 038
// http://arc038.contest.atcoder.jp/assignments

int H,W;
vector<string> s;
int dp[101][101];

bool rec(int x,int y) {
	if(x<0 || y<0 || x>=W || y>=H || s[y][x]=='#') return true;
	if(dp[y][x]!=-1) return dp[y][x];
	if(rec(x+1,y)==false) return dp[y][x] = true;
	if(rec(x+1,y+1)==false) return dp[y][x] = true;
	if(rec(x,y+1)==false) return dp[y][x] = true;
	return dp[y][x] = false;
}

int main() {
	memset(dp,-1,sizeof(dp));
	cin >> H >> W;
	s.resize(H);
	REP(i,H) {
		cin >> s[i];
	}

	cout << (rec(0,0)?"First":"Second") << endl;
	return 0;
}

int main_A() {
	int N;
	cin >> N;
	vector<int> a(N);
	REP(i,N) {
		cin >> a[i];
	}
	sort(ALL(a),greater<int>());

	int ans = 0;
	REP(i,N) {
		if(!(i&1)) {
			ans += a[i];
		}
	}
	cout << ans << endl;
	return 0;
}

