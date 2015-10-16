
#include <bits/stdc++.h>
#include <stdio.h>
#include <string.h>
using namespace std;
typedef long long int lli;
const int INF = 100000000;
const int dx[4]={0,1,0,-1};
const int dy[4]={-1,0,1,0};
struct Pos{public:int x;int y;Pos(int X=0,int Y=0){x=X;y=Y;}Pos(const Pos &p){x=p.x;y=p.y;}};

// A First Grader
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0557

int n;
vector<int> an;
lli dp[101][21];

lli solve() {
	memset(dp, 0, sizeof(dp));

	dp[n-1][an[n-1]] = 1;
	for(int i=n-1; i>=0; i--) {
		for(int j=0;j<=20;j++) {
			if(j-an[i]>=0) dp[i][j] += dp[i+1][j-an[i]];
			if(j+an[i]<=20) dp[i][j] += dp[i+1][j+an[i]];
		}
	}

	return dp[1][an[0]];
}

int main() {
	scanf("%d", &n);
	an.resize(n);
	for(int i=0;i<n;i++) scanf("%d", &an[i]);
	printf("%lld\n", solve());
	return 0;
}

