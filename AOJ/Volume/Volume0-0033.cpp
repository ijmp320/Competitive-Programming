#include <stdio.h>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
#include <math.h>
#include <string>
using namespace std;
const int INF = 100000000;

// Ball
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0033


int ball[10];

bool dfs(int n, int b, int c) {
	if(n==9) {
		if(ball[n] > b || ball[n] > c) return true;
		else return false;
	}
	if(ball[n] > b && dfs(n+1,ball[n], c)) return true;
	if(ball[n] > c && dfs(n+1,b, ball[n])) return true;
	return false;
}

int main(){
	int n;scanf("%d",&n);
	for(int l=0;l<n;l++) {
		for(int i=0;i<10;i++) scanf("%d",&ball[i]);
		if(dfs(0,0,0))printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}

