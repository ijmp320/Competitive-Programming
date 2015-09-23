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

// AtCoder Beginner Contest 021
// http://abc021.contest.atcoder.jp/assignments

int main_B() {
	int N,a,b,K;
	cin >> N >> a >> b >> K;
	vector<int> P(K);
	REP(i,K) cin >> P[i];
 
	set<int> s;
	s.insert(a);
	s.insert(b);
	REP(i,K) {
		if(s.find(P[i])==s.end()) {
			s.insert(P[i]);
		}
		else {
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;
	return 0;
}

int main_A() {
	int N;
	cin >> N;
	cout << N/2 + N%2 << endl;
	REP(i,N/2) {
		cout << 2 << endl;
	}
	if(N%2==1) cout << 1 << endl;
	return 0;
}
