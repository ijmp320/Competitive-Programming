#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
#define FOR(i,a,n) for(int i=a;i<(int)(n);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(a) (a).begin(),(a).end()
#define MP(a,b) make_pair(a,b)
#define PB(a) push_back(a)
#define F front
#define S second
const int INF = 2000000000;
const int DX[4]={0,1,0,-1}, DY[4]={-1,0,1,0};
struct P{int x;int y;P(int X=0,int Y=0){x=X;y=Y;}};

// Elementary data structures - Stack
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_3_A&lang=jp

int main() {
	stack<int> st;
	while(true) {
		char str[10];
		if(scanf("%s",str)==EOF) break;

		if(str[0]=='+' || str[0]=='-' || str[0]=='*') {
			int a,b;
			b=st.top();st.pop();
			a=st.top();st.pop();
			if(str[0]=='+') st.push(a+b);
			else if(str[0]=='-') st.push(a-b);
			else if(str[0]=='*') st.push(a*b);
		}
		else {
			st.push(atoi(str));
		}
	}
	cout << st.top() << endl;
	return 0;
}
