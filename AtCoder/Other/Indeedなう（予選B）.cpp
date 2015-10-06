#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int,int> pint;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define m_p(a,b) make_pair(a,b)
#define p_b(a,b) push_back(a,b)
const int INF = 100000000;
const int dx[4]={0,1,0,-1}, dy[4]={-1,0,1,0};
struct P{int x;int y;P(int X=0,int Y=0){x=X;y=Y;}};

// Indeedなう（予選B）
// http://indeednow-qualb.contest.atcoder.jp/assignments


struct nord {
	vector<int> con;
	bool checked;
};

int N;
vector<nord> tree;
vector<int> ans;
void dfs(int n) {
	rep(i,tree[n].con.size()) {
		if(!tree[tree[n].con[i]].checked) {
			ans.push_back(tree[n].con[i]+1);
			tree[tree[n].con[i]].checked = true;
			dfs(tree[n].con[i]);
		}
	}
	return;
}

void bfs() {
	priority_queue<int, vector<int>, greater<int> > q;
	q.push(0);
	while(!q.empty()) {
		int n = q.top(); q.pop();
		tree[n].checked = true;
		ans.push_back(n+1);

		rep(i,tree[n].con.size()) {
			int ni = tree[n].con[i];
			if(!tree[ni].checked) {
				q.push(ni);
			}
		}
	}
}

int main_C() {
	cin >> N;
	tree.resize(N);
	rep(i,N-1) {
		int a,b;
		cin >> a >> b;
		a--; b--;
		tree[a].con.push_back(b);
		tree[b].con.push_back(a);
	}
	rep(i,N) {
		sort(tree[i].con.begin(),tree[i].con.end());
	}

	bfs();

	rep(i,ans.size()) {
		printf("%d",ans[i]);
		if(i==ans.size()-1) putchar('\n');
		else putchar(' ');
	}

	return 0;
}

// abcabcabcabcabcabc
// 0        10

int main_B() {
	string s, t;
	cin >> s >> t;

	if(s.size() > t.size()) {
		cout << -1 << endl;
		return 0;
	}

	string s2 = s+s;
	for(int i=s2.size(); i>=0; i--) {
		bool f = false;
		for(int j=0; j<t.size(); j++) {
			if(s2[i+j] != t[j]) {
				f = true; break;
			}
		}
		if(!f) {
			cout << s.size() - i << endl;
			return 0;
		}
	}
	cout << -1 << endl;
	return 0;
}

int main_A() {
	int x1,y1,x2,y2;
	cin >> x1 >> y1 >> x2 >> y2;
	cout << abs(x1-x2) + abs(y1-y2) + 1 << endl;
	return 0;
}

