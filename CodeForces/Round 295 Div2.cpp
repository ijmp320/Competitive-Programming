#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int,int> pint;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
const int INF = 100000000;
const int dx[4]={0,1,0,-1}, dy[4]={-1,0,1,0};
struct P{int x;int y;P(int X=0,int Y=0){x=X;y=Y;}};

// Codeforces Round #295 (Div. 2)
// http://codeforces.com/contest/520

int main_B() {
	int n,m;
	cin >> n >> m;

	set<int> s;
	s.insert(n);
	queue< pint > q;
	q.push(make_pair(n,0));

	while(!q.empty()) {
		int a = q.front().first;
		int b = q.front().second; q.pop();

		if(a == m) {
			cout << b << endl;
			break;
		}
		if(s.find(a*2) == s.end() && a*2 < m*2) {
			q.push(make_pair(a*2, b+1));
			s.insert(a*2);
		}
		if(s.find(a-1) == s.end() && a-1 > 0) {
			q.push(make_pair(a-1, b+1));
			s.insert(a-1);
		}
	}
	return 0;
}

int main_A() {
	int n;
	char str[101];
	cin >> n >> str;
	rep(i,n) if(str[i] >= 'A' && str[i] <= 'Z') str[i] += 0x20;
	string s = str;
	sort(s.begin(), s.end());

	int c=0;
	rep(i,n) {
		if(0x61 + c == s[i]) {
			c++;
		}
	}
	if(c==26) cout << "YES" << endl;
	else cout << "NO" << endl;

	return 0;
}

