#include <stdio.h>
#include <vector>
using namespace std;

// Property Distribution  2015/02/05 AC
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0118

int h,w;
int bd[100][100];
int tgt;

int dirx[4]={0,1,0,-1};
int diry[4]={-1,0,1,0};

void dfs(int x,int y) {
	bd[y][x]=-1;
	for(int i=0;i<4;i++) {
		int nx=x+dirx[i], ny=y+diry[i];
		if(nx<0 || ny<0 || nx>=w || ny>=h) continue;
		if(bd[ny][nx]!=tgt) continue;
		dfs(nx,ny);
	}
	return;
}

int main() {
	while(1) {

	scanf("%d %d",&h,&w);
	if(h==0 && w==0) break;
	for(int y=0;y<h;y++) {
		char str[102];
		scanf("%s",str);
		for(int x=0;x<w;x++) {
			if(str[x] == '@') bd[y][x] = 1;
			if(str[x] == '#') bd[y][x] = 2;
			if(str[x] == '*') bd[y][x] = 3;
		}
	}

	int ans=0;
	for(int y=0;y<h;y++) {
		for(int x=0;x<w;x++) {
			if(bd[y][x]!=-1) {
				tgt=bd[y][x];
				dfs(x,y);
				ans++;
			}
		}
	}
	printf("%d\n",ans);

	}
	return 0;
}

