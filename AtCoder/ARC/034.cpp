#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int,int> pint;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
const int INF = 100000000;
const int dx[4]={0,1,0,-1}, dy[4]={-1,0,1,0};
struct P{int x;int y;P(int X=0,int Y=0){x=X;y=Y;}};

// AtCoder Regular Contest 034
// http://arc034.contest.atcoder.jp/assignments

int fx(ll x) {
	int ret = 0;
	while (x>0){
		ret += x % 10;
		x = x / 10;
	}
	return ret;
}

int main() {
	ll N;
	cin >> N;

	vector<ll> ans;
	for(ll i=N-153; i < N; i++) {
		if(i+fx(i) == N) {
			ans.push_back(i);
		}
	}

	int ans_size = ans.size();
	cout << ans_size << endl;
	rep(i, ans_size) cout << ans[i] << endl;
	return 0;
}

int main_A() {
	int N;
	cin >> N;
	double maxsc = 0;
	rep(i,N) {
		int a,b,c,d,e;
		cin >> a >> b >> c >> d >> e;
		double s = a+b+c+d;
		double nurie = (double)e / 90.0 * 11.0;
		s += nurie;
		if(s>maxsc) maxsc = s;
	}
	printf("%f\n",maxsc);
	return 0;
}
