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
struct Point{int x;int y;Point(int X=0,int Y=0){x=X;y=Y;}};

// Runtime Error

// Cheese
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0558

int H,W,N;
Point factory[10];
Point s;
int twn[1000][1000];
bool checked[100][100];

int getcost(Point p1, Point p2) {
	int ans=0;
	int gx=p2.x, gy=p2.y;

	queue< pair<Point, int> > q;
	q.push(make_pair(p1,0));

	while(1) {
		if(q.size()==0) break;

		Point po = q.front().first;
		int deep = q.front().second; q.pop();

		checked[po.y][po.x]=true;
		if(po.x==gx && po.y==gy) {
			ans=deep;
			break;
		}

		for(int i=0;i<4;i++) {

			int nx=po.x+dx[i]; int ny=po.y+dy[i];
			if(nx<0 || ny<0 || nx>=W || ny>=H) continue;
			if(twn[ny][nx]==40 || checked[ny][nx]==true) continue;
			Point pn(nx,ny);
			q.push(make_pair(pn,deep+1));

		}
	}

	return ans;
}

int main() {
	scanf("%d %d %d",&H,&W,&N);
	for(int i=0;i<H;i++) {
		char str[1001];
		scanf("%s",str);
		for(int j=0;j<W;j++) {
			if(str[j]=='S') {s.x=j; s.y=i;}
			else {
				twn[i][j]=str[j]-48;
				factory[twn[i][j]].y = i;
				factory[twn[i][j]].x = j;
			}
		}
	}

	int ans=0;
	Point start;
	Point goal;
	start.x=s.x, start.y=s.y;

	for(int move=1;move<=N;move++){
		goal.x=factory[move].x;
		goal.y=factory[move].y;

		for(int y=0;y<H;y++) for(int x=0;x<W;x++) checked[y][x]=false;
		ans += getcost(start, goal);

		start = goal;
	}
	printf("%d\n",ans);
	return 0;
}

