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

// AtCoder Regular Contest 017
// http://arc017.contest.atcoder.jp/assignments

int main_B() {
	int N,K;
	cin >> N >> K;
	vector<int> a(N),b(N,0);
	cin >> a[0];
	b[0]=1;
	FOR(i,1,N) {
		cin >> a[i];
		b[i] = (a[i] > a[i-1] ? b[i-1]:0)+1;
	}
 
	int ans = 0;
	REP(i,N) ans += (b[i] >= K);
	cout << ans << endl;
	return 0;
}
 
int main_A() {
	int N;
	cin >> N;
	int t = sqrt(N) + 1;
	FOR(i,2,t) {
		if(N%i == 0) {
			cout << "NO\n";
			return 0;
		}
	}
	cout << "YES\n";
	return 0;
}
