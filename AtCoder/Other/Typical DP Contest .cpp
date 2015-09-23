#include <bits/stdc++.h>
#include <stdio.h>
#include <string.h>
using namespace std;
typedef long long int ll;
const int INF = 100000000;
const double PI = 3.14159265358979323846264338327950288;
const int dx[4]={0,1,0,-1};
const int dy[4]={-1,0,1,0};
struct Pos{public:int x;int y;Pos(int X=0,int Y=0){x=X;y=Y;}Pos(const Pos &p){x=p.x;y=p.y;}};

// Typical DP Contest
// http://tdpc.contest.atcoder.jp/assignments

bool can[10001];
int main_A() {
	int i;
	int n;
	cin >> n;
	can[0]=true;
	REP(i,n) {
		int p;
		cin >> p;
		for(int j=10000;j>=0;j--)
			if(can[j]) can[j+p] = true;
	}
	int ans=0;
	REP(i,10001) ans+=can[i];
	cout << ans << endl;
	return 0;
}


int N;
vector<int> p;
set<int> used;
int dp[101][10001];

// i問目まででj点
int rec(int i, int j) {
	if(i==N) {
		if(used.find(j) == used.end()) {
			used.insert(j);
			return 1;
		}
		else return 0;
	}

	if(dp[i][j] != -1) return dp[i][j];
	int ret=0;
	ret += rec(i+1, j);  // 取らない
	ret += rec(i+1, j+p[i]);  // 取る
	return dp[i][j] = ret;
}

int main_A() {
	memset(dp,-1,sizeof(dp));
	scanf("%d",&N);
	p.resize(N);
	for(int i=0;i<N;i++) scanf("%d",&p[i]);
	int a=rec(0,0);
	printf("%d\n",used.size());
	return 0;
}
