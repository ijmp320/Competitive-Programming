#include <stdio.h>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
#include <math.h>
#include <string>
using namespace std;
const int INF = 100000000;

// The Number of Island
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0067

char island[12][15];

int dirx[4] = {0,1,0,-1};
int diry[4] = {-1,0,1,0};

void dfs(int x, int y) {
	if(x<0 || y<0 || x>=12 || y>=12) return;
	island[y][x]='0';
	for(int i=0;i<4;i++) {
		int nx=x+dirx[i];
		int ny=y+diry[i];
		if(island[ny][nx]=='1') dfs(nx,ny);
	}
	return;
}

int main(){
	while(true) {
		for(int i=0;i<12;i++) if(scanf(" %s",island[i])==EOF) return 0;
		int ans = 0;
		for(int i=0;i<12;i++)
			for(int j=0;j<12;j++)
				if(island[i][j] == '1') {
					dfs(j,i);
					ans++;
				}
		printf("%d\n",ans);
	}
	return 0;
}

