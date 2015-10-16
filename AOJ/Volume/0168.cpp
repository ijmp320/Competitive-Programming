#include <bits/stdc++.h>
#include <stdio.h>
#include <string.h>
using namespace std;
const int INF = 100000000;
const int dx[4]={0,1,0,-1};
const int dy[4]={-1,0,1,0};
struct Pos{public:int x;int y;Pos(int X=0,int Y=0){x=X;y=Y;}Pos(const Pos &p){x=p.x;y=p.y;}};

// Kannondou
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0168

int dp[31];
// i段目までの上り方の数
void getday() {
	dp[0] = 1;
	dp[1] = 1;
	dp[2] = 2;
	for(int i=3;i<=30;i++) {
		dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
	}
}

int main() {
	getday();

	while(1) {
		int n;
		scanf("%d",&n);
		if(n==0) break;

		int ans = (dp[n]/10/365) + 1;
		printf("%d\n", ans);
	}
	return 0;
}

