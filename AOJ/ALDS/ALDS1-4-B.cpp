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

// Search - Binary Search
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_4_B&lang=jp

int main() {
	int n;
	cin >> n;
	vector<int> v(n);
	REP(i,n) cin >> v[i];

	int q;
	cin >> q;
	int ans = 0;
	REP(i,q) {
		int t;
		cin >> t;
		int k=n/2;
		int end=n;
		while(true) {
			if(end==k) break;
			if(v[k]==t) {
				ans++;
				break;
			}
			if(v[k]>t) {
				end=k;
				k = k/2;
			}
			else {
				k = k + (end-k+1)/2;
			}
		}
	}
	cout << ans << endl;
	return 0;
}
