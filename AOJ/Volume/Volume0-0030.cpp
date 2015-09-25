#include <stdio.h>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>
#include <math.h>
#include <string>
using namespace std;
const int INF = 100000000;

// Sum of Integers
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0030&lang=jp

int ans=0;
int s;

void dfs(int n, int a, int sum) {
	if(a==0 && sum==s) {ans++;return;}
	if(n==10) return;
	dfs(n+1, a-1, sum+n);  // nを使う
	dfs(n+1, a, sum);  // nを使わない
	return;
}

int main(){
	for(;;) {
		int a;
		ans=0;
		scanf("%d %d",&a,&s);
		if(a==0 && s==0) break;
		dfs(0, a ,0);
		printf("%d\n",ans);
	}
	return 0;
}

