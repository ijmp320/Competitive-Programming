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
const int INF = 100000000;
const int dx[4]={0,1,0,-1}, dy[4]={-1,0,1,0};
struct P{int x;int y;P(int X=0,int Y=0){x=X;y=Y;}};

// Cup
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0503


// 嘘解法

struct hoge{
	int depth;
	stack<int> st[3];
	hoge() {
		depth = 0;
	}
};

int main() {
	while(true) {
		int n,m;
		cin >> n >> m;
		if(n==0 && m==0) break;

		hoge sh;
		rep(i,3) {
			int an;
			cin >> an;
			rep(j,an) {
				int a;
				cin >> a;
				sh.st[i].push(a);
			}
		}

		queue<hoge> q;
		q.push(sh);
		bool f=false;
		int ans = 0;
		while(!q.empty()) {
			hoge h = q.front(); q.pop();
			if(h.depth >= m) {
				continue;
			}

			if((h.st[0].empty() && h.st[1].empty() && !h.st[2].empty())
				|| (!h.st[0].empty() && h.st[1].empty() && h.st[2].empty())) {
				f = h.depth <= m;
				ans = h.depth;
				break;
			}
			if(!h.st[0].empty() && ((h.st[1].empty()) || (h.st[0].top() > h.st[1].top()))) {
				hoge nh = h;
				int a = nh.st[0].top(); nh.st[0].pop();
				nh.st[1].push(a);
				nh.depth++;
				q.push(nh);
			}
			if(!h.st[2].empty() && ((h.st[1].empty()) || (h.st[2].top() > h.st[1].top()))) {
				hoge nh = h;
				int a = nh.st[2].top(); nh.st[2].pop();
				nh.st[1].push(a);
				nh.depth++;
				q.push(nh);
			}
			if(!h.st[1].empty() && ((h.st[0].empty()) || (h.st[1].top() > h.st[0].top()))) {
				hoge nh = h;
				int a = nh.st[1].top(); nh.st[1].pop();
				nh.st[0].push(a);
				nh.depth++;
				q.push(nh);
			}
			if(!h.st[1].empty() && ((h.st[2].empty()) || (h.st[1].top() > h.st[2].top()))) {
				hoge nh = h;
				int a = nh.st[1].top(); nh.st[1].pop();
				nh.st[2].push(a);
				nh.depth++;
				q.push(nh);
			}
		}
		if(f) cout << ans << endl;
		else cout << "-1" << endl;
	}
	return 0;
}
