#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <sstream>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <algorithm>
#include <functional>
#include <chrono>
#define FOR(i,x,n) for(int i=0;i<(int)(n);i++)
#define REP(i,n) FOR(i,0,n)
#define ALL(c) (c).begin(),(c).end()
using namespace std;
using namespace chrono;
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<vector<int>> vvi;

// Codeforces Round #323 (Div.2)
// http://codeforces.com/contest/583

#define C

#ifdef C
// WA
int main() {
	int n;
	cin >> n;
	vector<int> a(n*n);
	map<int,int> mp;
	REP(i,n*n) {
		cin >> a[i];
		if(mp.find(a[i]) == mp.end()) {
			mp[a[i]] = 1;
		}
		else mp[a[i]]++;
	}

	int t = mp.size();
	if(t <= n) {
		for(auto itr = mp.begin(); itr != mp.end(); itr++) {
			REP(i,n/t) {
				cout << (itr->first) << " ";
			}
		}
		return 0;
	}

	set<int> s;
	REP(i,n*n) {
		if(mp[a[i]]%2==1) {
			if(s.find(a[i]) == s.end()) {
				s.insert(a[i]);
				cout << a[i] << " ";
			}
		}
	}

	cout << endl;
	return 0;
}
#endif


#ifdef B
int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	REP(i,n) {
		cin >> a[i];
	}

	int ans = 0;
	int rest = n;
	int sum = 0;
	int i = 0;
	bool right = true;
	while(rest > 0) {
		if(right) {
			if(a[i] <= sum) {
				a[i] = 1e9;
				rest--;
				sum++;
			}
			if(rest <= 0) break;
			if(i == n - 1) {
				right = false;  // 左向きにする
				ans++;
				i--;
				continue;
			}
			i++;
		}
		else {
			if(a[i] <= sum) {
				a[i] = 1e9;
				rest--;
				sum++;
			}
			if(rest <= 0) break;
			if(i == 0) {
				right = true;
				ans++;
				i++;
				continue;
			}
			i--;
		}
	}
	cout << ans << endl;

	return 0;
}
#endif


#ifdef A
int main() {
	int n;
	cin >> n;
	set<int> h,v;
	int ans = 0;
	REP(i,n*n) {
		int x,y;
		cin >> x >> y;
		int f = 0;
		if(h.find(y) != h.end()) {
			f++;
		}
		if(v.find(x) != v.end()) {
			f++;
		}
		if(f==0) {
			h.insert(y);
			v.insert(x);
			cout << i + 1 << " ";
		}
	}
	return 0;
}
#endif