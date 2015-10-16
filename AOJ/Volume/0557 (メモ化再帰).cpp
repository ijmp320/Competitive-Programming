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
lli dp[101][101];

lli rec(int i, int j) {
	if(dp[i][j] != -1) return dp[i][j];

	if(j<0 || j>20) return 0;
	if(i==n-1) {
		if(j==an[n-1]) return 1;
		else return 0;
	}

	return dp[i][j] = (rec(i+1, j + an[i]) + rec(i+1, j - an[i]));
}

int main() {
	memset(dp, -1, sizeof(dp));
	scanf("%d", &n);
	an.resize(n);
	for(int i=0;i<n;i++) scanf("%d", &an[i]);
	printf("%lld\n", rec(1, an[0]));
	return 0;
}

