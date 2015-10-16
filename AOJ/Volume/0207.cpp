#include <stdio.h>
#include <vector>
using namespace std;

// Block 2015/02/05 AC
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0207

int w,h;
int bd[100][100];
int xs,ys;
int xg,yg;
int sc;

const int dirx[4] = {0,1,0,-1};
const int diry[4] = {-1,0,1,0};

bool dfs(int x, int y) {
	if(x==xg && y==yg) return true;
	bd[y][x]=-2;
	for(int i=0;i<4;i++) {
		int nx=x+dirx[i],ny=y+diry[i];
		if(nx<0 || ny<0 || nx>=w || ny>=h) continue;
		if(bd[ny][nx]!=sc) continue;
		if(dfs(nx,ny)==true) return true;
	}
	return false;
}

int main() {
	while(1) {
		scanf("%d %d",&w, &h);
		if(w==0 && h==0) break;
		for(int y=0;y<100;y++)for(int x=0;x<100;x++) bd[y][x]=-1;
		scanf("%d %d",&xs,&ys);
		scanf("%d %d",&xg,&yg);
		xs--;ys--;xg--;yg--;
		int n;
		scanf("%d",&n);
		for(int i=0;i<n;i++) {
			int c,d,x,y;
			scanf("%d %d %d %d",&c,&d, &x, &y);
			x--;y--;
			if(d)
				for(int py=0;py<4;py++)
					for(int px=0;px<2;px++)
						bd[y+py][x+px] = c;
			else
				for(int py=0;py<2;py++)
					for(int px=0;px<4;px++)
						bd[y+py][x+px] = c;
		}
		sc = bd[ys][xs];
		if (dfs(xs,ys) == true) printf("OK\n");
		else printf("NG\n");
	}
	return 0;
}

