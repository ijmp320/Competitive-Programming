#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int,int> pint;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
const int INF = 100000000;
const int dx[4]={0,1,0,-1}, dy[4]={-1,0,1,0};
struct P{int x;int y;P(int X=0,int Y=0){x=X;y=Y;}};

// Card Game
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0500

int main() {
	while(true) {
		int n,A=0,B=0;
		cin >> n;
		if(n==0) break;
		rep(i,n) {
			int a,b;
			cin >> a >> b;
			if(a==b) {
				A += a;
			B += b;
			}
			else if(a > b) A += a + b;
			else if(a < b) B += a + b;
		}
		cout << A  << " " << B << endl;
	}
	return 0;
}
