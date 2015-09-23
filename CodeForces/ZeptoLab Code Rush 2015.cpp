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
#define F first
#define S second
const int INF = 2000000000;
const int DX[4]={0,1,0,-1}, DY[4]={-1,0,1,0};
struct P{int x;int y;P(int X=0,int Y=0){x=X;y=Y;}};

// ZeptoLab Code Rush 2015
// http://codeforces.com/contest/526

int main_B() {
	int n;
	cin >> n;
	int siz = pow(2,(n+1)) - 2;
	int t = pow(2,n);
	vector<int> a(siz);
	REP(i,siz) cin >> a[i];

	// int m=0;
	// for(int i=t; i<=siz+1; i++) {
	// 	int c=0;
	// 	for(int j=i; j!=1; j/=2) {
	// 		c += a[j-2];
	// 	}
	// 	m = max(m,c);
	// }

	stack<int> s;


	int ans = 0;
	cout << ans << endl;
	return 0;
}

int main_A() {
	int n;
	string s;
	cin >> n >> s;
	if(n < 4) {
		cout << "no" << endl;
		return 0;
	}

	for(int p=0;p<n;p++) {
		if(s[p]=='.') continue;
		for(int i=(n/2); i>=1; i--) {
			if(p+(i*4) > n-1) continue;
			if(s[p+i]=='*' && s[p+i*2]=='*' && s[p+i*3]=='*' && s[p+i*4] == '*') {
				cout << "yes" << endl;
				return 0;
			}
		}
	}
	cout << "no" << endl;
	return 0;
}
