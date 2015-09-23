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

// AtCoder Regular Contest 036
// http://arc036.contest.atcoder.jp/assignments

int main_B() {
	int n;
	cin >> n;
	vector<int> h(n);

	REP(i,n) {
		cin >> h[i];
	}

	if(n<3) {
		cout << n << endl;
		return 0;
	}

	int ans = 0;
	int st=0;
	bool found = true;
	FOR(i,1,n) {
		if(h[i-1] < h[i]) {
			if(found) {
				st=i-1;
				found = false;
			}
		}
		else {
			found = true;
		}
		ans = max(ans, i-st+1);
	}
	cout << ans << endl;
	return 0;
}

int main_A() {
	int N,K;
	cin >> N >> K;
	int t1,t2,t3;
	cin >> t1 >> t2;
	int ans = -1;
	REP(i,N-2) {
		cin >> t3;
		if(t1+t2+t3 < K) {
			ans = ans == -1 ? i+3 : ans;
		}
		t1 = t2;
		t2 = t3;
	}
	cout << ans << endl;
	return 0;
}
