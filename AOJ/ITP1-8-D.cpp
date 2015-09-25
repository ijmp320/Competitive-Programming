#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int,int> pint;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
const int INF = 100000000;
const int dx[4]={0,1,0,-1}, dy[4]={-1,0,1,0};
struct P{int x;int y;P(int X=0,int Y=0){x=X;y=Y;}};

// Character - Ring
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_8_D

int main() {
	string s, p;
	cin >> s >> p;
	int len_s=s.size();
	for(int i=0; i<len_s; i++) {
		for(int j=0;;j++) {
			int t=i+j;
			if(t >= len_s) t-=len_s;
			if(p[j] == '\0') {
				cout << "Yes" << endl;
				return 0;
			}
			if(s[t] != p[j]) break;
		}
	}
	cout << "No" << endl;
	return 0;
}
