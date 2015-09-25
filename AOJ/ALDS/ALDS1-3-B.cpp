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

// Elementary data structures - Queue
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_3_B&lang=jp

int main() {
	int n,q;
	queue< pair<string,int> > que;
	cin >> n >> q;
	REP(i,n) {
		string name;
		int time;
		cin >> name >> time;
		que.push(MP(name,time));
	}
	int now=0;
	while(!que.empty()) {
		string name = que.front().F;
		int time = que.front().S;
		que.pop();
		if(time-q > 0) {
			que.push(MP(name,time-q));
			now += q;
		}
		else {
			cout << name << " " << now+time << endl;
			now += time;
		}
	}
	return 0;
}
