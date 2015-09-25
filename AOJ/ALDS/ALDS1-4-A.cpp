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

// Search - Linear Search
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_4_A&lang=jp

int main() {
	int n;
	cin >> n;
	std::vector<int> v(n);
	REP(i,n) {
		cin >> v[i];
	}
	int q;
	cin >> q;
	v.PB(0);
	int sum = 0;
	REP(i,q) {
		int t;
		cin >> t;
		v[n] = t;
		int j=0;
		while(v[j]!=t) {
			j++;
		}
		if(j!=n) {
			sum++;
		}
	}
	cout << sum << endl;
	return 0;
}

int main_map() {
	int n;
	cin >> n;
	set<int> s;
	REP(i,n) {
		int t;
		cin >> t;
		s.insert(t);
	}

	int sum = 0;
	cin >> n;
	REP(i,n) {
		int t;
		cin >> t;
		if(s.find(t) != s.end()) sum++;
	}
	cout << sum << endl;
	return 0;
}
