#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
typedef pair<int,int> pint;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define m_p(a,b) make_pair(a,b)
#define p_b(a) push_back(a)
#define range(x,y,w,h) return((x)>=0&&(x)<(w)&&(y)>=0&&(y)<(h))
const int INF = 100000000;
const int dx[4]={0,1,0,-1}, dy[4]={-1,0,1,0};
struct P{int x;int y;P(int X=0,int Y=0){x=X;y=Y;}};

// AtCoder Beginner Contest 020
// http://abc020.contest.atcoder.jp/assignments

// Problem C
// this is a way of 40 pts.

int H,W,T;
char s[10][10];

struct hoge {
	int x,y;
	bool b[10][10];
	int wh;
	int bl;
	hoge() {
		memset(b,0,sizeof(b));
	}
};

int main() {
	P st,gl;
	cin >> H >> W >> T;
	rep(i,H) rep(j,W) {
		cin >> s[i][j];
		if(s[i][j] == 'S') {st.x=j; st.y=i;}
		else if(s[i][j] == 'G') {gl.x=j; gl.y=i;}
	}

	vector< pint > v;
	queue<hoge> q;
	hoge h;
	h.wh = 0;
	h.bl = 0;
	h.x = st.x;
	h.y = st.y;
	h.b[st.y][st.x] = true;
	q.push(h);
	while(!q.empty()) {
		hoge hg = q.front(); q.pop();
		if(s[hg.y][hg.x] == '.' || s[hg.y][hg.x] == 'G') hg.wh++;
		if(s[hg.y][hg.x] == '#') hg.bl++;

		if(hg.x == gl.x && hg.y == gl.y) {
			v.p_b(m_p(hg.wh, hg.bl));
			continue;
		}

		rep(i,4) {
			int nx = hg.x + dx[i];
			int ny = hg.y + dy[i];
			if(nx>=0 && nx<W && ny>=0 && ny<H && !hg.b[ny][nx]) {
				hoge nhg = hg;
				nhg.x = nx;
				nhg.y = ny;
				nhg.b[ny][nx] = true;
				q.push(nhg);
			}
		}
	}

	for(unsigned i=T; i>=1; i--) {
		rep(j,(int)v.size()) {
			ll a = v[j].first;
			ll b = v[j].second;
			if(a + b * i <= T) {
				printf("%d\n",i);
				return 0;
			}
		}
	}

	return 0;
}

int main_B() {
	string a,b;
	cin >> a >> b;
	std::istringstream iss(a+b);
	int num = 0;
	iss >> num;
	num *= 2;
	cout << num << endl;
	return 0;
}


int main_A() {
	int q;
	cin >> q;
	if(q==1) cout << 1 << endl;
	else cout << "chokudai" << endl;
	return 0;
}
