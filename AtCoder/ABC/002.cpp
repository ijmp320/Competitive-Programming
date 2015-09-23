#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int,int> pint;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
const int INF = 100000000;
const int dx[4]={0,1,0,-1}, dy[4]={-1,0,1,0};
struct P{int x;int y;P(int X=0,int Y=0){x=X;y=Y;}};

// AtCoder Beginner Contest 002
// http://abc002.contest.atcoder.jp/assignments
 
int main_C() {
	P p[3];
	rep(i,3) {
		cin >> p[i].x >> p[i].y;
		if(i!=0) {
			p[i].x -= p[0].x;
			p[i].y -= p[0].y;
		}
	}
	printf("%f\n", abs(p[1].x * p[2].y - p[2].x * p[1].y)/2.0);
	return 0;
}

int main_B() {
	char W[31];
	cin >> W;
	for(int i=0; W[i] != 0; i++) {
		if(W[i] != 'a' && W[i] != 'i' && W[i] != 'u' && W[i] != 'e' && W[i] != 'o') {
			putchar(W[i]);
		}
	}
	putchar('\n');
	return 0;
}

int main_A() {
	int X,Y;
	cin >> X >> Y;
	printf("%d\n",max(X,Y));
	return 0;
}