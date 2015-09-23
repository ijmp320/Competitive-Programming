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

// Indeedなう（オープンコンテストB）
// http://indeednow-finalb-open.contest.atcoder.jp/assignments


// TLE
struct hoge {
	int a;
	int b;
	int c;
};
bool comp(const hoge &t1, const hoge &t2) {
	return t1.a < t2.a;
}
int main_B() {
	int N;
	cin >> N;
	vector< hoge > t(N);
	vector< pii > ans_p(N);
	REP(i,N) {
		hoge h;
		cin >> h.a >> h.b;
		h.c = i;
		t[i] = h;
	}
	sort(ALL(t), comp);
	for(int i=0;i<N;i++) {
		int ans = 0;
		for(int j=i+1;j<N;j++) {
			if(t[i].b <= t[j].a) break;
			ans++;
		}
		ans_p[i] = MP(t[i].c, ans);
	}
	sort(ALL(ans_p));
	REP(i,N) {
		cout << ans_p[i].S << endl;
	}
	return 0;
}


const int MOD = 1e9+7;
int main_A() {
	int A,B;
	cin >> A >> B;
	ll ans = 0;
	for(ll i=A; i<=B; i++) {
		ans=(ans+i*i*(i+1)/2)%MOD;
	}
	cout << ans << endl;
	return 0;
}
