#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int,int> pint;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define m_p(a,b) make_pair(a,b)
#define p_b(a,b) push_back(a,b)
const int INF = 100000000;
const int dx[4]={0,1,0,-1}, dy[4]={-1,0,1,0};
struct P{int x;int y;P(int X=0,int Y=0){x=X;y=Y;}};

// Data Conversion
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0501

int main() {
	while(true) {
		int n;
		cin >> n;
		if(n==0) break;
		map<char,char> m;
		rep(i,n) {
			char a,b;
			cin >> a >> b;
			m.insert(m_p(a,b));
		}
		int n2;
		cin >> n2;
		rep(i,n2) {
			char c;
			cin >> c;
			if(m.find(c)!=m.end()) {
				c = m[c];
			}
			printf("%c",c);
		}
		putchar('\n');
	}
	return 0;
}
