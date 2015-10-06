#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef unsigned long long int ull;
typedef pair<int,int> pint;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
#define m_p(a,b) make_pair(a,b)
#define p_b(a,b) push_back(a,b)
const int INF = 100000000;
const int dx[4]={0,1,0,-1}, dy[4]={-1,0,1,0};
struct P{int x;int y;P(int X=0,int Y=0){x=X;y=Y;}};

// Codeforces Round #296 (Div. 2)
// http://codeforces.com/contest/527

int main() {
	int n;
	string s,t;
	cin >> n >> s >> t;

	int dif = 0;
	map<char,int> mp;
	pint p;
	bool f=false;
	rep(i,n) if(s[i] != t[i]) dif++;

	rep(i,n) {
		if(s[i]!=t[i]) {
			if(!f && mp.find(s[i]) != mp.end() && s[mp[s[i]]] == t[i]) {
				swap(t[mp[s[i]]],t[i]);
				p.first = mp[s[i]]+1;
				p.second = i+1;
				f = true;
				continue;
			}
			mp.insert(m_p(t[i],i));
		}
	}
	if(f) {
		dif-=2;
		printf("%d\n%d %d\n", dif, p.first, p.second);
	}
	else {
		mp.clear();
		dif = 0;
		f=false;
		rep(i,n) {
			if(s[i]!=t[i]) {
				if(mp.find(s[i]) != mp.end()) {
					swap(t[mp[s[i]]],t[i]);
					p.first = mp[s[i]]+1;
					p.second = i+1;
					f=true;
					continue;
				}
				dif++;
				mp.insert(m_p(t[i],i));
			}
		}
		if(f) {
			printf("%d\n%d %d\n", dif, p.first, p.second);
		}
		else {
			printf("%d\n-1 -1\n",dif);
		}
	}
	return 0;
}

/*
ll rec(ll a, ll b) {
	ll ret = 0;
	if(a > 0 && b > 0) {
		ret += a / b;
		ret += rec(b, a%b);
	}
	return ret;
}

int main() {
	ll a,b;
	cin >> a >> b;
	cout << rec(a,b) << endl;
	return 0;
}
*/

