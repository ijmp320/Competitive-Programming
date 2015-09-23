#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
typedef pair<int,int> pii;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define reprop(i,n) for(int i=(n);i>=0;i--)
#define all(a) (a).begin(),(a).end()
#define m_p(a,b) make_pair(a,b)
#define p_b(a) push_back(a)
#define check_range(x,y,w,h) (x>=0&&x<w&&y>=0&&y<h)
const int INF = 2000000000;
const int dx[4]={0,1,0,-1}, dy[4]={-1,0,1,0};
struct P{int x;int y;P(int X=0,int Y=0){x=X;y=Y;}};

// AtCoder Beginner Contest 004
// http://abc004.contest.atcoder.jp/assignments

int main_C() {
	int n;
	int a[6] = {1,2,3,4,5,6};
	cin >> n;
	rep(i,n%30) {
		swap(a[i%5], a[i%5+1]);
	}
	rep(i,6) {
		printf("%d",a[i]);
	}
	putchar('\n');
	return 0;
}

int main_B() {
	char c[4][5];
	rep(i,4) rep(j,4) cin >> c[i][j];
	for(int i=3;i>=0;i--) {
		for(int j=3;j>=0;j--) {
			putchar(c[i][j]);
			if(j==0) putchar('\n');
			else putchar(' ');
		}
	}
	return 0;
}

int main_A() {
	int n;
	cin >> n;
	cout << 2*n << endl;
	return 0;
}

