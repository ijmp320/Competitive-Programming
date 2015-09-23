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

// 東京大学プログラミングコンテスト2014
// http://utpc2014.contest.atcoder.jp/assignments


// Problem E
// TLE soliution
int main() {
	int n;
	cin >> n;
	vector< pair<string,int> > v;
	rep(k,n) {
		string a;
		int b;
		cin >> a >> b;
		v.p_b(m_p(a,b));

		int ans=0;
		for(int i=0; i<v.size(); i++) {
			if(v[i].first.size() >= a.size()) {
				for(int j=1;j*a.size()<=9;j++) {
					string c;
					rep(l,j) c+=a;
					if(v[i].first == c) {
						ans += v[i].second;
						break;
					}
				}
			}
			else {
				bool b=false;
				for(int j=0; j<v[i].first.size(); j++) {
					if(a[a.size()-v[i].first.size()+j] != v[i].first[j]) {
						b=true;
						break;
					}
				}
				if(!b) {
					ans += v[i].second;
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}

// WA
int main_C() {
	int mi=INF,ma=0;
	int n;
	cin >> n;
	vector< vector<int> > g(n);
	rep(i,n) {
		int a,b;
		cin >> a >> b;
		a--; b--;
		g[a].p_b(b);
		g[b].p_b(a);
	}
	rep(i,n) {
		sort(all(g[i]));
		mi = min(mi, (int)(g[i].size()));
		ma = max(ma, (int)(g[i].size()));
	}
	cout << mi << " " << ma << endl;
	return 0;
}

int main_A() {
	vector<string> vs;
	string bef;
	cin >> bef;
	vs.p_b(bef);
	for(;;) {
		if(cin.eof()) break;
		string s;
		cin >> s;
		vs.p_b(s);
	}
	int vs_size = vs.size()-1;

	bef = vs[0];
	vector<bool> b(vs_size);
	b[0]=true;
	for(int i=1; i<vs_size; i++) {
		b[i]=true;
		if(vs[i]!="not") continue;

		if(b[i-1]==true && vs[i-1]=="not") {
			b[i-1]=false;
			b[i]=false;
		}
	}

	int end = 0;
	for(int i=vs_size-1; i>=0; i--) {
		if(vs[i]=="not") {
			b[i]=true;
		}
		else {
			break;
		}
	}

	rep(i, vs_size) {
		if(b[i]) {
			cout << vs[i];
			if(i!=vs_size-1) cout << " ";
			else cout << "\n";
		}
	}
	return 0;
}
