#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
typedef pair<int,int> pii;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define reprop(i,n) for(int i=(n);i>=0;i--)
#define all(a) (a).begin(),(a).end()
#define m_p(a,b) make_pair(a,b)
#define p_b(a) push_back(a)
#define check_range(x,y,w,h) (x>=0&&x<w&&y>=0&&y<h)
const int INF = 2000000000;
const int dx[4]={0,1,0,-1}, dy[4]={-1,0,1,0};
struct P{int x;int y;P(int X=0,int Y=0){x=X;y=Y;}};

// AtCoder Beginner Contest 005
// http://abc005.contest.atcoder.jp/assignments

int main_B() {
	int n;
	cin >> n;
	int ans = INF;
	rep(i,n) {
		int a;
		cin >> a;
		ans = min(ans, a);
	}
	cout << ans << endl;
	return 0;
}

int main_A() {
	int x,y;
	cin >> x >> y;
	cout << y/x << endl;
	return 0;
}
