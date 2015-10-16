#include <stdio.h>
#include <algorithm>
#include <math.h>
#include <string>
#include <vector>
#include <queue>
#include <stack>
#include <set>
#include <utility>
#include <string.h>
using namespace std;
const int INF = 100000000;
const int dx[4]={0,1,0,-1};
const int dy[4]={-1,0,1,0};
class Pos{public:int x;int y;Pos(int X=0,int Y=0){x=X;y=Y;}Pos(const Pos &p){x=p.x;y=p.y;}};

// Cheese  2015/02/07 AC
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0558

struct P {
	int x,y,cost;
	P(int _x,int _y,int _cost) {
		x=_x;y=_y;cost=_cost;
	}
};

int H,W,N;
char twn[1002][1002];
bool check[1002][1002];

P getdist(int x, int y, char to) {
	queue<P> open;
	memset(check, 0, sizeof(check));
	open.push(P(x,y,0));
	while(!open.empty()) {
		P p=open.front(); open.pop();
		if(check[p.y][p.x]) continue;
		check[p.y][p.x] = true;

		if(twn[p.y][p.x]==to) return p;

		for(int i=0;i<4;i++) {
			int nx=p.x + dx[i];
			int ny=p.y + dy[i];
			if(nx>=0 && ny>=0 && nx<W && ny<H && twn[ny][nx]!='X') {
				P pn(nx,ny,p.cost+1);
				open.push(pn);
			}
		}
	}
}

int main() {
	int x, y;
	scanf("%d %d %d",&H,&W,&N);
	for(int i=0;i<H;i++) {
		scanf("%s", twn[i]);
		for(int j=0;j<W;j++) {
			if(twn[i][j]=='S') {
				x=j; y=i;
			}
		}
	}

	int ans=0;
	for(int mv=1;mv<=N;mv++) {
		P p=getdist(x,y, '0'+mv);
		ans+=p.cost;
		x=p.x; y=p.y;
	}
	printf("%d\n",ans);
	return 0;
}

